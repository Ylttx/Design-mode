#ifndef WEATHER_DATA_H
#define WEATHER_DATA_H
#include "Subject.h"
#include "Observer.h"
#include <string>

typedef struct {
    float temperature;
    float humidity;
    float pressure;
} WeatherDataStruct;

class WeatherData : public Subject
{
private:
    std::string m_api_key = "03c17969bb016b36b4cc0a9727fdc4bb";
    WeatherDataStruct m_data;

    const std::string getAPI(const std::string& city);
 
    void setMeasurements(float temperature, float humidity, float pressure);
 
public:
    void measurementsChanged() {
        notifyObservers();
    }
 
    void notifyObservers() {
        for (auto& o : m_observers) {
            o->update();
        }
    }

    WeatherDataStruct get_data() {
        return m_data;
    }

    /**
     * @brief 更新天气数据 高德API: https://lbs.amap.com/api/webservice/guide/api/weatherinfo/
    */
    void updateMeasurements();
};

#endif // WEATHER_DATA_H