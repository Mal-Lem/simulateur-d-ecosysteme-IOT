#ifndef SERVER_H
#define SERVER_H

#include <string>
#include <vector>

class Server {
public:
    // Constructeur par défaut
    Server();
    
    // Destructeur
    ~Server();

    // Constructeur de copie
    Server(const Server& other);

    // Opérateur d'affectation par copie
    Server& operator=(const Server& other);

    // Fonctions de gestion des données
    void consoleWrite(const std::string& data);
    void fileWrite(const std::string& sensorType, const std::string& data);

private:
    std::vector<std::string> logData;  // Pour stocker les logs en mémoire avant l'écriture
};

#endif
