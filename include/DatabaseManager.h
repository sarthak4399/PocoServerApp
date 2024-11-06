#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <Poco/Data/Session.h>
/// @brief DatabaseManager class
/// @details This class is responsible for managing the database
class DatabaseManager {
private:
    Poco::Data::Session* session;
public:
    DatabaseManager();
    void initializeDatabase();
    void addComponent(const std::string& name, int quantity, const std::string& type, const std::string& location);
};

#endif // DATABASEMANAGER_H
