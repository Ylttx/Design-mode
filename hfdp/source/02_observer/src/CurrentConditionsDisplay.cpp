#include "CurrentConditionsDisplay.h"
#include <iostream>
using namespace std;

void CurrentConditionsDisplay::update() {
    auto wd = m_weather_data.lock();
    if (!wd)
        return;

    auto data = wd->get_data();
    m_temperature = data.temperature;
    m_humidity = data.humidity;
    display();
}

void CurrentConditionsDisplay::display() {
    cout << "\033[32m" // 绿色字体
        << "----------当前天气----------\n"
        << "\t气温: " << m_temperature << "F degrees\n"
        << "\t湿度: " << m_humidity << "% humidity\n"
        "-----------------------------" << endl;
}
