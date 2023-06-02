#ifndef CURRENT_CONDITIONS_DISPLAY_H
#define CURRENT_CONDITIONS_DISPLAY_H
#include "Observer.h"
#include "DisplayElement.h"
#include "WeatherData.h"
#include <memory>

class CurrentConditionsDisplay : public Observer, DisplayElement
{
private:
    float m_temperature;
    float m_humidity;
    std::weak_ptr<WeatherData> m_weather_data;

public:
    void saveSubject(const std::weak_ptr<WeatherData> wd) {
        m_weather_data = wd;
    }

    void update() override;
    void display() override;
};

#endif // CURRENT_CONDITIONS_DISPLAY_H