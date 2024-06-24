#ifndef ATM_CHANGE_PASSWORD_FORM_H
#define ATM_CHANGE_PASSWORD_FORM_H

#include <QWidget>

namespace Ui {
//creamos nuestra calse para cambiar contraseña
class ATMChangePasswordForm;
}

class ATMChangePasswordForm : public QWidget
{
    Q_OBJECT

public:
    //constructor por defecto
    explicit ATMChangePasswordForm(QWidget *parent = 0);
    //destructor
    ~ATMChangePasswordForm();
// Invocar a nuestras funciones butto
// van a ser los diferentes botones que tengamos en la interfaz
private slots:
    void on_button_accept_clicked();
    void on_button_reset_clicked();
    void on_button_return_clicked();

private:
    Ui::ATMChangePasswordForm *ui;
};

#endif // ATM_CHANGE_PASSWORD_FORM_H
