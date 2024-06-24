#include <QString>
#include <QDebug>
#include <QTimer>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QMessageBox>
#include <QScreen>
// header
#include "atm_take_money_form.h"
#include "atm_main_function_form.h"
#include "atm_action_process_form.h"
#include "ui_atm_take_money_form.h"

//varible sglobales para guardar el id tarjeta
extern QString g_card_id;
//varible para saber si se realizo un retiro
bool           g_take_money;

ATMTakeMoneyForm::ATMTakeMoneyForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ATMTakeMoneyForm)
{
    ui->setupUi(this);
    //titulo demi vnetana
    this->setWindowTitle("Interfaz de retiro");
    //tamanio de mi ventana
    this->setFixedSize(this->width(), this->height());

    QPalette palette_text = ui->text_browser_info->palette();
    palette_text.setBrush(QPalette::Base, QBrush(Qt::NoBrush));
    //texto de mi interfaz
    ui->text_browser_info->setPalette(palette_text);
    //paleta de colores
    QPalette palette_lcd;
    palette_lcd.setColor(QPalette::Normal, QPalette::WindowText, Qt::red);
    //contador
    ui->lcd_timer->setPalette(palette_lcd);
    ui->lcd_timer->setSegmentStyle(QLCDNumber::Flat);
    ui->lcd_timer->display(30);

    flag_return_     = false;
    flag_stop_timer_ = false;

    QTimer *timer_ = new QTimer(this);
    timer_->start(1000);
    connect(timer_, SIGNAL(timeout()), this, SLOT(updateTimerOperation()));
}

ATMTakeMoneyForm::~ATMTakeMoneyForm()
{
    delete ui;
}
//metodo que muestra nueva ventana y centrada
void ATMTakeMoneyForm::startNewWindow(QWidget *new_window)
{
    new_window->show();
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    new_window->move(
        (screenGeometry.width() - new_window->width()) / 2,
        (screenGeometry.height() - new_window->height()) / 2
        );
}
//metodo que verifica si hay saldo suficiente para relizar el retiro
bool ATMTakeMoneyForm::isHaveEnoughMoney(int money_take, int &money_all)
{
    QString table     = " card_information ";
    QString property  = " card_money ";
    QString condition = " card_id = " + g_card_id;

    QSqlQuery query;
    query.exec("select" + property + "from" + table + "where" + condition);

    if (query.next()) {
        QSqlRecord record;
        int        index;
        record = query.record();
        index  = record.indexOf("card_money");
        money_all = query.value(index).toInt();
        if (money_all >= money_take) {
            return true;
        }
        else {
            return false;
        }
    }
    else {
        return false;
    }
}
//metodo bool que actiza el saldo de mi tarjeta despues de un retiro
bool ATMTakeMoneyForm::takeMoneyFromATM(int money_take, int money_all)
{
    QString money_rest = QString::number((money_all - money_take), 10);
    QString table      = " card_information ";
    QString property   = " card_money ";
    QString condition  = " card_id = " + g_card_id;

    QSqlQuery query;
    query.exec("update" + table + "set" + property + "=" + money_rest + " where"
               + condition);

    if (query.isActive()) {
        return true;
    }
    else {
        return false;
    }
}

//metodo maneja laoperacion de retiro
void ATMTakeMoneyForm::takeMoneyOperation(int money_take)
{
    int money_all;
    if (isHaveEnoughMoney(money_take, money_all)) {
        ATMActionProcessForm *atm_action_process = new ATMActionProcessForm();
        startNewWindow(atm_action_process);
        ui->lcd_timer->display(30);
        g_take_money = takeMoneyFromATM(money_take, money_all);
    }
    else {
        //indica si no hay saldo suficiente
        QMessageBox::warning(this, tr("error"), tr("¡No hay saldo disponible!"), tr("Sí"));
        ui->lcd_timer->display(30);
    }
}

void ATMTakeMoneyForm::on_button_100_clicked()
{
    takeMoneyOperation(100);
}

void ATMTakeMoneyForm::on_button_200_clicked()
{
    takeMoneyOperation(200);
}

void ATMTakeMoneyForm::on_button_400_clicked()
{
    takeMoneyOperation(400);
}

void ATMTakeMoneyForm::on_button_800_clicked()
{
    takeMoneyOperation(800);
}

void ATMTakeMoneyForm::on_button_1000_clicked()
{
    takeMoneyOperation(1000);
}

void ATMTakeMoneyForm::on_button_2000_clicked()
{
    takeMoneyOperation(2000);
}
//boton de accept que recibe una cantidad escrita y llama takeoperation
void ATMTakeMoneyForm::on_button_accept_clicked()
{
    QString money = ui->line_edit_money->text();
    takeMoneyOperation(money.toInt());
}
//boton return que retorna a mi funcion anterior
void ATMTakeMoneyForm::on_button_return_clicked()
{
    ATMMainFunctionForm *atm_main_function = new ATMMainFunctionForm();
    startNewWindow(atm_main_function);
    flag_stop_timer_ = true;
    this->close();
}
//contador
void ATMTakeMoneyForm::updateTimerOperation()
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
            ATMMainFunctionForm *atm_main_function = new ATMMainFunctionForm();
            startNewWindow(atm_main_function);
            this->close();
        }
    }
}
