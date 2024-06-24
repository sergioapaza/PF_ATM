//libreria de cadenas en qt
#include <QString>
//mostrar mensajes en pantalla
#include <QMessageBox>
//mensajes de depuracion
#include <QDebug>
// Ejecutar consultas en SQL
#include <QSqlQuery>
// Para manejar registro en de resultados en SQL
#include <QSqlRecord>
// Para obtener informacion sobre la pantalla
#include <QScreen>

// llamos alos headers y interfaz
#include "atm_change_password_form.h"
#include "atm_main_function_form.h"
#include "ui_atm_change_password_form.h"

//variables globales para conterner
//en qstring Id de la tarjera y contraseña de la tarjeta del usuario
extern QString g_card_id;
extern QString g_card_pwd;

//contructor
ATMChangePasswordForm::ATMChangePasswordForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ATMChangePasswordForm)
{
    //instancia de la interfaz
    ui->setupUi(this);
    //indicar titulo de la ventana
    this->setWindowTitle("Interfaz de cambio de contraseña");
    //fijar el tamaño de la ventana
    this->setFixedSize(this->width(), this->height());
}
//destructor
ATMChangePasswordForm::~ATMChangePasswordForm()
{
    delete ui;
}
// fucion que es boton de mi interfaz accept_clicked
void ATMChangePasswordForm::on_button_accept_clicked()
{
    //creamos variables para guardar informacion y comparar
    QString card_pwd_new_a;
    QString card_pwd_new_b;
    QString table = " card_information ";

    //obener y guardar mis contraseñas ingresadas en la interfaz
    card_pwd_new_a = ui->line_edit_card_pwd_new_a->text();
    card_pwd_new_b = ui->line_edit_card_pwd_new_b->text();
    //indicar si la primera contraseña es igual a la segunda
    //tambien verifica si es igual a la contraseña de la BD
    if (card_pwd_new_a == card_pwd_new_b && card_pwd_new_a != g_card_pwd) {
        //Crear una consulta SQL

        QSqlQuery query;
        //prepara una consulta para actualizar la contraseña
        query.prepare("update" + table +
                      "set card_pwd = :card_pwd where card_id = :card_id");
        //vincular los valores de los parametros
        query.bindValue(":card_pwd", card_pwd_new_a);
        query.bindValue(":card_id", g_card_id);
        //ejecutar consulta
        query.exec();
        // si fue exitosa
        if (query.isActive()) {
            //Muestra en pantalla un mensaje de exito
            QMessageBox::information(this, tr("pista"), tr("¡La contraseña ha sido cambiada!"),
                                     tr("Sí"));
            //nos redirige a nuestra venta principal de funciones
            ATMMainFunctionForm *atm_main_function = new ATMMainFunctionForm();
            atm_main_function->show();

            //posicionar la ventana al centro de la pantalla
            QScreen *screen = QGuiApplication::primaryScreen();
            QRect screenGeometry = screen->geometry();

            atm_main_function->move(
                (screenGeometry.width() - atm_main_function->width()) / 2,
                (screenGeometry.height() - atm_main_function->height()) / 2
                );
            //cierra la ventana
            this->close();
        }
    }
    // si las contaseñas no conincides o igual a la actual
    else {
        //imprimi un mensaje de contraseñas incorrectas
        QMessageBox::warning(this, tr("advertir"), tr("¡La contraseña ingresada dos veces es incorrecta!"),
                             tr("Sí"));
        //limpia los campos de texto
        ui->line_edit_card_pwd_new_a->clear();
        ui->line_edit_card_pwd_new_b->clear();
    }
}
//funcion de boton reset
void ATMChangePasswordForm::on_button_reset_clicked()
{
    //limpia los campos de texto
    ui->line_edit_card_pwd_new_a->clear();
    ui->line_edit_card_pwd_new_b->clear();
}

//funcion de boton reset return(volver)
void ATMChangePasswordForm::on_button_return_clicked()
{
    //crea y muestra la ventana de funciones principales del cajero
    ATMMainFunctionForm *atm_main_function = new ATMMainFunctionForm();
    atm_main_function->show();
    //posiciona la ventana al centro de pantalla
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    atm_main_function->move(
        (screenGeometry.width() - atm_main_function->width()) / 2,
        (screenGeometry.height() - atm_main_function->height()) / 2
        );
    //cierra la ventana
    this->close();
}
