#ifndef TEMPERATURE_SENSOR_H
#define TEMPERATURE_SENSOR_H

#include "Sensor.h"

class TemperatureSensor : public Sensor {
public:
    TemperatureSensor(Server* server) : Sensor("temperature", server) {}

protected:
    float generateData() override {
        return static_cast<float>(rand() % 50 + 10); // Température entre 10 et 60
    }
};

#endif
