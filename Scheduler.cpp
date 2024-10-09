#include "Scheduler.h"
#include <thread>
#include <chrono>

void Scheduler::addSensor(Sensor* sensor) {
    sensors.push_back(sensor);
}

void Scheduler::simulate(int iterations) {
    for (int i = 0; i < iterations; ++i) {
        for (auto& sensor : sensors) {
            sensor->update();
        }
        // Temporisation (par exemple, 1 seconde entre les lectures)
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}
