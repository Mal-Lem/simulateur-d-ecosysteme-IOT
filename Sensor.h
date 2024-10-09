#ifndef SENSOR_H
#define SENSOR_H

#include <string>
#include "Server.h"

class Sensor {
public:
    Sensor(const std::string& type, Server* server);
    virtual ~Sensor();

    // Fonction pour simuler une lecture et envoyer la donnée au serveur
    virtual void update();

protected:
    std::string type;    // Type du capteur (ex: "temperature")
    float value;         // Dernière valeur mesurée
    int id;              // Identifiant unique
    Server* server;      // Pointeur vers le serveur pour envoyer les données

    // Fonction virtuelle pour générer des données spécifiques au capteur
    virtual float generateData();
};

#endif
