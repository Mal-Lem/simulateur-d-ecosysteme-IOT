#ifndef SCHEDULER_H
#define SCHEDULER_H

#include <vector>
#include "Sensor.h"

class Scheduler {
public:
    // Ajouter un capteur à l'ordonnanceur
    void addSensor(Sensor* sensor);

    // Simulation des capteurs pour un nombre d'itérations
    void simulate(int iterations);

private:
    std::vector<Sensor*> sensors; // Liste de capteurs
};

#endif
