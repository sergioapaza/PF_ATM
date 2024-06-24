//libreria para para imprimir mensajes depuracion
#include <QDebug>
//libreria para utilizar temporizadores en qt
#include <QTimer>
//libreria para mostrar cuadros de mensaje
#include <QMessageBox>
//llamar a nuestro header(clase) y interfaz
#include "atm_action_process_form.h"
#include "ui_atm_action_process_form.h"

//creamos variables globales
// indica si se realiza operacion de retiro
extern bool g_take_money;
//indica si se realiza operacion de deposito
extern bool g_save_money;

//invocamos al constructor de nuestra clase ProcessForm
ATMActionProcessForm::ATMActionProcessForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ATMActionProcessForm)
{
    //funcion por defecto de qt configurar la interfaz de usuario
    //con el objeto this
    ui->setupUi(this);
    //Funcion setWindowTitle que estable el titulo de la ventana
    this->setWindowTitle("Ventana Ejecucion");
    //funcionFixedSize fija el tamanio de la ventana
    this->setFixedSize(this->width(), this->height());

    //Inicilizamos el controlador en falso
    flag_stop_timer_ = false;

    //creamos un temporizador timer_
    QTimer *timer_ = new QTimer(this);
    //indicamos un intervalo de 50 milisegundos
    timer_->start(50);
    //funcion de qt para conectar señales y slots
    //obejto timer_ emite una señal cada vex que se cumpla el intervalo 50 milisegundos
    connect(timer_, SIGNAL(timeout()), this, SLOT(updateTimerOperation()));
}

//destructor
ATMActionProcessForm::~ATMActionProcessForm()
{
    delete ui;
}

//funcion que se llama cada vez que que nuestro temporizador ejecuta
void ATMActionProcessForm::updateTimerOperation()
{
    //si mi controlador es verdadero la funcion no retorna nada
    if (flag_stop_timer_) {
        return ;
    }
    // creamos un barra process que incremente el valor en 1
    int process = ui->progress_bar->value() + 1;

    // si es menor= 100
    if (process <= 100) {
        //asegurar que no se detenga la barra process
        flag_stop_timer_ = false;
        //actulizar el valor de la barra
        ui->progress_bar->setValue(process);
    }
    else {
        //deterner la barra de progreso
        flag_stop_timer_ = true;
        // Comprobar que se este relizando una operacion de retiro
        if (g_take_money && !g_save_money) {
            //le asignamos falso para cambiar el estado de acctual de
            //funcion retiro a falso
            g_take_money = false;
            //imprimiros un cuadro en pantalla que indique la operacion retiro a sido completada
            QMessageBox::information(this, tr("pista"), tr("¡Operación de retiro completada!"),
                                     tr("Sí"));
        }
        //comprobamos que se esta ejecutando la operacion deposito
        else if (!g_take_money && g_save_money) {
            //cambiamos el estado actual de mi funcion deposito
            g_save_money = false;
            //imprimir cuadro de opearcion deposito completada
            QMessageBox::information(this, tr("pista"), tr("¡Operación de depósito completada!"),
                                     tr("Sí"));
        }
        //ahor asi no se esta ejecutando deposito o retiro
        else if ((!g_take_money && !g_save_money)){
            //imprimir un  cuadro de error operacion en curso
            QMessageBox::warning(this, tr("error"), tr("¡La operación no ha terminado!"), tr("Sí"));
        }
        //cerrar ventana
        this->close();
    }
}
