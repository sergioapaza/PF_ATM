#include <QString>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QMessageBox>
#include <QScreen>
#include <QDebug>

//inluir a mis header
#include "atm_login_to_main_form.h"
#include "atm_main_function_form.h"
#include "atm_welcome_form.h"
#include "atm_connect_database.h"
#include "ui_atm_login_to_main_form.h"

//creo mis varibles globales almacenar ID tarjeta  y contraseña
QString g_card_id;
QString g_card_pwd;

//llamo a mi constructor
ATMLoginToMainForm::ATMLoginToMainForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ATMLoginToMainForm)
{
    ui->setupUi(this);
    //indicar el titulo de mi ventana login
    this->setWindowTitle("interfaz de inicio de sesión");
    //fijar el tamaño de mi ventana
    this->setFixedSize(this->width(), this->height());
}
//destructor
ATMLoginToMainForm::~ATMLoginToMainForm()
{
    delete ui;
}
//boton login
void ATMLoginToMainForm::on_button_login_clicked()
{
    //variables para verificar si el id y contraseña son corrector
    bool flag_id  = false;
    bool flag_pwd = false;
    //indices ingresar a BD
    int index_card_id;
    int index_card_pwd;
    //varibles para almacenar
    QString card_id;
    QString card_pwd;
    QSqlQuery query;
    QSqlRecord record;
    //recibir y guaradar los datos de mi interfaz
    card_id = ui->line_edit_id->text();
    card_pwd   = ui->line_edit_pwd->text();
    //Verificar mi conexion a la BD
    if (!ATMConnectDatabase::openDatabase()) {
        QMessageBox::warning(this, tr("error"), tr("No se pudo abrir la base de datos!"), tr("Sí"));
        return ;
    }

    //ejecutar la consulta
    query.exec("select * from card_information");
    //iterar en todas las filas
    while (query.next()) {
        //obtener el registro actual
        record = query.record();
        //obtener el id y contraseña
        index_card_id = record.indexOf("card_id");
        index_card_pwd   = record.indexOf("card_pwd");
        //consulta que indica si el id es ingesado al de mi BD
        if (query.value(index_card_id).toString() == card_id) {
            flag_id = true;
            //consulta que indica si contraseña es igual a mi BD
            if (query.value(index_card_pwd).toString() == card_pwd) {
                g_card_id  = card_id;
                g_card_pwd = card_pwd;
                flag_pwd = true;
                ui->line_edit_id->clear();
                ui->line_edit_pwd->clear();

                //crear y llamar a mi ventana principal de funciones
                ATMMainFunctionForm *atm_main_function =
                    new ATMMainFunctionForm();
                atm_main_function->show();
                //posiciona mi ventana al centro
                QScreen *screen = QGuiApplication::primaryScreen();
                QRect screenGeometry = screen->geometry();
                atm_main_function->move(
                    (screenGeometry.width() - atm_main_function->width()) / 2,
                    (screenGeometry.height() - atm_main_function->height()) / 2
                    );

                this->close();
            }
        }
    }
    // comprueba si mi contraseña es incorrecta
    if (flag_id && !flag_pwd) {
        //imprimir ventana de error
        QMessageBox::warning(this, tr("error"), tr("¡contraseña incorrecta!"), tr("Sí"));
        ui->line_edit_pwd->clear();
        return ;
    }//indica si el usuario o contraseña es incorrecto
    else if (!flag_id && !flag_pwd){
        //imprime una ventana de error
        QMessageBox::warning(this, tr("error"), tr("¡Cuenta o contraseña incorrectas!"), tr("Sí"));
        ui->line_edit_id->clear();
        ui->line_edit_pwd->clear();
        return ;
    }
}

// funcion boton return
void ATMLoginToMainForm::on_button_return_clicked()
{
    //crea y me redirige a mi ventana ventana inicial
    ATMWelcomeForm *atm_welcome = new ATMWelcomeForm();
    atm_welcome->show();
    //centrar mi ventana
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    atm_welcome->move(
        (screenGeometry.width() - atm_welcome->width()) / 2,
        (screenGeometry.height() - atm_welcome->height()) / 2
        );
    this->close();
}
