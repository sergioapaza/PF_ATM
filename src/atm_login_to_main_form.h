#ifndef ATM_LOGIN_TO_MAIN_FORM_H
#define ATM_LOGIN_TO_MAIN_FORM_H

#include <QWidget>

namespace Ui {
class ATMLoginToMainForm;
}
//crear mi clase LoginMain para mi ventana login
class ATMLoginToMainForm : public QWidget
{
    Q_OBJECT

public:
    //comstructor defecto y dstructor
    explicit ATMLoginToMainForm(QWidget *parent = 0);
    ~ATMLoginToMainForm();
//botones de mi interfarz
private slots:
    void on_button_return_clicked();
    void on_button_login_clicked();

private:
    Ui::ATMLoginToMainForm *ui;
};

#endif // ATM_LOGIN_TO_MAIN_FORM_H
