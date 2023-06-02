#include "WeatherData.h"
#include "CurrentConditionsDisplay.h"
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    auto weather_data = make_shared<WeatherData>();
    auto current_display = make_shared<CurrentConditionsDisplay>();
    weather_data->registerObserver(current_display);
    current_display->saveSubject(weather_data);

    weather_data->updateMeasurements();
}