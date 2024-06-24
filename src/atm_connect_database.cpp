//incluyo a mi header
#include "atm_connect_database.h"

//año una base de datos utilizando el controlador ODBC
QSqlDatabase ATMConnectDatabase::mysql_db = QSqlDatabase::addDatabase("QODBC");

ATMConnectDatabase::ATMConnectDatabase()
{
}

ATMConnectDatabase::~ATMConnectDatabase()
{
}

//creo un bool para indicar si abrio correctamente mi BD
bool ATMConnectDatabase::openDatabase()
{
    //nombre del host
    mysql_db.setHostName("127.0.0.1");
    //nombre del usuario
    mysql_db.setUserName("root");
    //contraseña de BD
    mysql_db.setPassword("");
    //indica el puerto de conextion
    mysql_db.setPort(3306);
    //establecer nombre de mi BD utilizando el controlador Mysql ODBC
    mysql_db.setDatabaseName("Driver={MySQL ODBC 8.4 ANSI Driver};DataBase=atm_manage_system;");
    //indica si fue exitosa o no
    if (mysql_db.open()) {
        return true;
    }
    else {
        return false;
    }
}

//cerrar mi conexion BD
void ATMConnectDatabase::closeDatabase()
{
    mysql_db.close();
}

