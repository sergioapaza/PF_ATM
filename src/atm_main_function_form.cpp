#include <QDebug>
#include <QTimer>
#include <QThread>
#include <QScreen>
//incluyo a header
#include "atm_main_function_form.h"
#include "atm_query_money_form.h"
#include "atm_transfer_money_form.h"
#include "atm_save_money_form.h"
#include "atm_take_money_form.h"
#include "atm_change_password_form.h"
#include "atm_welcome_form.h"
#include "ui_atm_main_function_form.h"

ATMMainFunctionForm::ATMMainFunctionForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ATMMainFunctionForm)
{
    ui->setupUi(this);
    //indicar titulo de mi ventana
    this->setWindowTitle("Interfaz principal");
    //indicar tamañ de mi ventnaa
    this->setFixedSize(this->width(), this->height());
    //configurar la paleta de colores
    palette_text_ = ui->text_browser_info->palette();
    palette_text_.setBrush(QPalette::Base, QBrush(Qt::NoBrush));
    //texto de mi ventana
    ui->text_browser_info->setPalette(palette_text_);
    palette_lcd_.setColor(QPalette::Normal, QPalette::WindowText, Qt::red);
    //contador en mi ventana
    ui->lcd_timer->setPalette(palette_lcd_);
    ui->lcd_timer->setSegmentStyle(QLCDNumber::Flat);
    ui->lcd_timer->display(30);
    //varibles para mi retorno de temporizador
    flag_return_     = false;
    flag_stop_timer_ = false;
    //crear mi temporizador
    QTimer *timer_ = new QTimer(this);
    //1000 milisegundos
    timer_->start(1000);
    connect(timer_, SIGNAL(timeout()), this, SLOT(updateTimerOperation()));
}

ATMMainFunctionForm::~ATMMainFunctionForm()
{
    delete ui;
}

//metodo para llamar llaramar a una nueva ventana y centrarla
void ATMMainFunctionForm::startNewWindow(QWidget *new_window)
{
    new_window->show();
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    new_window->move(
        (screenGeometry.width() - new_window->width()) / 2,
        (screenGeometry.height() - new_window->height()) / 2
        );
}
//boton de mi interzar crea y abre la ventana query money(consulta)
void ATMMainFunctionForm::on_button_query_money_clicked()
{
    ATMQueryMoneyForm *atm_query_money = new ATMQueryMoneyForm();
    startNewWindow(atm_query_money);
    flag_stop_timer_ = true;
    this->close();
}
//boton de mi interzar crea y abre la ventana transfer money(transferir)
void ATMMainFunctionForm::on_button_transfer_money_clicked()
{
    ATMTransferMoneyForm *atm_transfer_money = new ATMTransferMoneyForm();
    startNewWindow(atm_transfer_money);
    flag_stop_timer_ = true;
    this->close();
}
//boton de mi interzar crea y abre la ventan save money (depositar)
void ATMMainFunctionForm::on_button_save_money_clicked()
{
    ATMSaveMoneyForm *atm_save_money = new ATMSaveMoneyForm();
    startNewWindow(atm_save_money);
    flag_stop_timer_ = true;
    this->close();
}
//boton de mi interzar crea y abre la ventan take money (retirar)
void ATMMainFunctionForm::on_button_take_money_clicked()
{
    ATMTakeMoneyForm *atm_take_money = new ATMTakeMoneyForm();
    startNewWindow(atm_take_money);
    flag_stop_timer_ = true;
    this->close();
}
//boton de mi interzar crea y abre la ventan change pwd (actulizar contrasenia)
void ATMMainFunctionForm::on_button_change_pwd_clicked()
{
    ATMChangePasswordForm *atm_change_password = new ATMChangePasswordForm();
    startNewWindow(atm_change_password);
    flag_stop_timer_ = true;
    this->close();
}
//boton de mi interzas que redirige a mi anterior ventana (bienvenida)
void ATMMainFunctionForm::on_button_return_clicked()
{
    ATMWelcomeForm *atm_welcome = new ATMWelcomeForm();
    startNewWindow(atm_welcome);
    flag_stop_timer_ = true;
    this->close();
}
//funcion de mi contador
//cada segundo actiza el contador si llega a
//redigire a ventana anterior
void ATMMainFunctionForm::updateTimerOperation()
{
    if (flag_stop_timer_) {
        return ;
    }
    if (ui->lcd_timer->intValue() > 0) {
        flag_return_ = false;
        ui->lcd_timer->display(ui->lcd_timer->intValue() - 1);
    }
    else {
        if (!flag_return_) {
            flag_return_ = true;
            ATMWelcomeForm *atm_welcome = new ATMWelcomeForm();
            startNewWindow(atm_welcome);
            this->close();
        }
    }
}
