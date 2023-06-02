#include "WeatherData.h"
#include "nlohmann/json.hpp"
#include <stdio.h>
#include <iostream>
using namespace std;

// https://restapi.amap.com/v3/weather/weatherInfo?city=310112&key=03c17969bb016b36b4cc0a9727fdc4bb
const std::string WeatherData::getAPI(const std::string& city) {
    const string api_prefix = "\"https://restapi.amap.com/v3/weather/weatherInfo?city=";
    string city_code = (city == "闵行区") ? "310112" : "110101";
    return api_prefix + city_code + "&key=" + m_api_key + "\"";
}

void WeatherData::setMeasurements(float temperature, float humidity, float pressure) {
    m_data.temperature = temperature;
    m_data.humidity = humidity;
    m_data.pressure = pressure;
    measurementsChanged();
}

void WeatherData::updateMeasurements() {
    // 请求数据
    string command = string("curl ") + getAPI("闵行区") + " 2>/dev/null";
    // cout << "popen: " << command << endl;
    FILE* fp = popen(command.c_str(), "r");
    if (!fp) {
        cerr << "popen error " << strerror(errno) << endl;
        return;
    }
 
    // 解析数据
    string raw_data;
    char buf[1024] = {0};
    while (fgets(buf, sizeof(buf) - 1, fp)) {
        raw_data += buf;
        memset(buf, 0, sizeof(buf));
    }
    pclose(fp);
    cout << "raw: " << raw_data << "\ndata size = " << raw_data.size() << endl;

    try {
        // 更新数据
        auto live = nlohmann::json::parse(raw_data)["lives"][0];
        float temperature = stof(live["temperature_float"].get<string>());
        float humidity = stof(live["humidity_float"].get<string>());
        float pressure = 20.5f; // 没有...
 
        setMeasurements(temperature, humidity, pressure);
    } catch (const exception& e) {
        cerr << "Unexpected error..." << e.what() << endl;
    }
}