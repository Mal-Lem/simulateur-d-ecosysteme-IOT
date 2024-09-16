#include "Server.h"

int main() {
    Server server;

    // Simuler des données de capteur
    std::string temperatureData = "Température: 22°C";
    std::string humidityData = "Humidité: 45%";

    // Afficher les données dans la console
    server.consoleWrite(temperatureData);
    server.consoleWrite(humidityData);

    // Enregistrer les données dans les fichiers de logs
    server.fileWrite("temperature", temperatureData);
    server.fileWrite("humidity", humidityData);

    return 0;
}
