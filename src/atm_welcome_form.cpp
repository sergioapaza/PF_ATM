//#include <QDesktopWidget>
#include <QScreen>
#include "atm_welcome_form.h"
#include "atm_login_to_main_form.h"
#include "ui_atm_welcome_form.h"

ATMWelcomeForm::ATMWelcomeForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ATMWelcomeForm)
{
    ui->setupUi(this);
    //titulo de mi pagina
    this->setWindowTitle("Pantalla de bienvenida");
    this->setFixedSize(this->width(), this->height());
}
//destuctor
ATMWelcomeForm::~ATMWelcomeForm()
{
    delete ui;
}
//boton salir finaliza el progrmaa
void ATMWelcomeForm::on_button_exit_clicked()
{
    this->close();
}
//si ingreso boton enter crea objeto y me redirige a mi ventana login
void ATMWelcomeForm::on_button_enter_clicked()
{
    ATMLoginToMainForm *atm_login_to_main = new ATMLoginToMainForm();
    atm_login_to_main->show();
    //centrar mi ventana
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    atm_login_to_main->move(
        (screenGeometry.width() - atm_login_to_main->width()) / 2,
        (screenGeometry.height() - atm_login_to_main->height()) / 2
        );
    //cerrar ventana
    this->close();
}
