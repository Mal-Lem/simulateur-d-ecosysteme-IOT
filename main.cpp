#include "Server.h"
#include "Sensor.h"
#include "Scheduler.h"
#include "TemperatureSensor.h" // Inclure les capteurs spécifiques si nécessaire

int main() {
    // Crée le serveur
    Server server;

    // Crée le scheduler
    Scheduler scheduler;

    // Crée des capteurs et les ajoute au scheduler
    TemperatureSensor tempSensor(&server);
    Sensor humiditySensor("humidity", &server);
    Sensor lightSensor("light", &server);
    Sensor soundSensor("sound", &server);

    scheduler.addSensor(&tempSensor);
    scheduler.addSensor(&humiditySensor);
    scheduler.addSensor(&lightSensor);
    scheduler.addSensor(&soundSensor);

    // Simule la collecte de données
    scheduler.simulate(5);

    return 0;
}
