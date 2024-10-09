#include "Sensor.h"
#include <cstdlib>
#include <iostream>

static int idCounter = 0; // Compteur pour les ID uniques

Sensor::Sensor(const std::string& type, Server* server)
    : type(type), server(server), id(idCounter++) {
    value = generateData();
}

Sensor::~Sensor() {}

void Sensor::update() {
    // Génère une nouvelle valeur de données
    value = generateData();

    // Prépare les données à envoyer au serveur
    std::string data = type + " ID " + std::to_string(id) + ": " + std::to_string(value);

    // Envoie les données au serveur
    server->consoleWrite(data);
    server->fileWrite(type, data);
}

float Sensor::generateData() {
    // Par défaut, retourne une valeur entre 0 et 100
    return static_cast<float>(rand() % 100);
}
