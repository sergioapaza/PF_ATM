#ifndef ATM_QUERY_MONEY_FORM_H
#define ATM_QUERY_MONEY_FORM_H

#include <QWidget>

namespace Ui {
class ATMQueryMoneyForm;
}
//creo mi clase consulta
class ATMQueryMoneyForm : public QWidget
{
    Q_OBJECT

public:
    //constructor y destructor
    explicit ATMQueryMoneyForm(QWidget *parent = 0);
    ~ATMQueryMoneyForm();

private slots:
    void on_button_return_clicked();

private:
    Ui::ATMQueryMoneyForm *ui;
};

#endif // ATM_QUERY_MONEY_FORM_H
