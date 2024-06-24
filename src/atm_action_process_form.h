#ifndef ATM_ACTION_PROCESS_FORM_H
#define ATM_ACTION_PROCESS_FORM_H

#include <QWidget>

namespace Ui {

//Creamos la clase ATMActionProcessForm
class ATMActionProcessForm;
}

class ATMActionProcessForm : public QWidget
{
    Q_OBJECT

public:
    //Creamos nuestro constructor por defecto apunte nullprt
    explicit ATMActionProcessForm(QWidget *parent = 0);
    //creamos cosntructor
    ~ATMActionProcessForm();

//creamaos una funcion slot para un temporizador
private slots:
    void updateTimerOperation();

private:
    //puntero ui para ingresar a los elemontos de la interfaz
    Ui::ATMActionProcessForm *ui;
    //atributo booleano para controlar operacion temporizador
    bool flag_stop_timer_;
};

#endif // ATM_ACTION_PROCESS_FORM_H
