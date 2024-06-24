#ifndef CONNECT_DATABASE_H
#define CONNECT_DATABASE_H
// incluimos libreria de BD
#include <QSqlDatabase>

class ATMConnectDatabase
{
public:
    //construtor y destructor
    ATMConnectDatabase();
    ~ATMConnectDatabase();
    //metodos estaticos para abrir y cerrar mi BD
    static bool openDatabase();
    static void closeDatabase();
private:

    static QSqlDatabase mysql_db;

};

#endif // CONNECT_DATABASE_H
