#include "Server.h"
#include <iostream>
#include <fstream>

// Constructeur par défaut
Server::Server() {
    std::cout << "Server initialisé" << std::endl;
}

// Destructeur
Server::~Server() {
    std::cout << "Server détruit" << std::endl;
}

// Constructeur de copie
Server::Server(const Server& other) {
    std::cout << "Server copié" << std::endl;
    logData = other.logData;  // Copier les données de l'autre serveur
}

// Opérateur d'affectation par copie
Server& Server::operator=(const Server& other) {
    if (this != &other) {
        logData = other.logData;
        std::cout << "Server assigné" << std::endl;
    }
    return *this;
}

// Affiche les données dans la console
void Server::consoleWrite(const std::string& data) {
    std::cout << "Données reçues des capteurs : " << data << std::endl;
}

// Écrit les données dans un fichier de logs
void Server::fileWrite(const std::string& sensorType, const std::string& data) {
    std::string fileName = sensorType + "_log.txt";
    std::ofstream logFile(fileName, std::ios_base::app);
    
    if (logFile.is_open()) {
        logFile << data << std::endl;
        logFile.close();
        std::cout << "Données du capteur " << sensorType << " enregistrées dans " << fileName << std::endl;
    } else {
        std::cerr << "Impossible d'ouvrir le fichier " << fileName << std::endl;
    }
}
