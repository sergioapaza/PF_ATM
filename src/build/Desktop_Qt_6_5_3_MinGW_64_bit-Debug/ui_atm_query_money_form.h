/********************************************************************************
** Form generated from reading UI file 'atm_query_money_form.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATM_QUERY_MONEY_FORM_H
#define UI_ATM_QUERY_MONEY_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ATMQueryMoneyForm
{
public:
    QLabel *label_query_money;
    QFrame *line_a;
    QPushButton *button_return;
    QFrame *line_b;
    QTableView *table_view_query_money;

    void setupUi(QWidget *ATMQueryMoneyForm)
    {
        if (ATMQueryMoneyForm->objectName().isEmpty())
            ATMQueryMoneyForm->setObjectName("ATMQueryMoneyForm");
        ATMQueryMoneyForm->resize(700, 400);
        label_query_money = new QLabel(ATMQueryMoneyForm);
        label_query_money->setObjectName("label_query_money");
        label_query_money->setGeometry(QRect(300, 30, 151, 31));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        label_query_money->setFont(font);
        line_a = new QFrame(ATMQueryMoneyForm);
        line_a->setObjectName("line_a");
        line_a->setGeometry(QRect(70, 80, 561, 20));
        line_a->setFrameShape(QFrame::HLine);
        line_a->setFrameShadow(QFrame::Sunken);
        button_return = new QPushButton(ATMQueryMoneyForm);
        button_return->setObjectName("button_return");
        button_return->setGeometry(QRect(290, 350, 99, 31));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        button_return->setFont(font1);
        line_b = new QFrame(ATMQueryMoneyForm);
        line_b->setObjectName("line_b");
        line_b->setGeometry(QRect(70, 320, 561, 20));
        line_b->setFrameShape(QFrame::HLine);
        line_b->setFrameShadow(QFrame::Sunken);
        table_view_query_money = new QTableView(ATMQueryMoneyForm);
        table_view_query_money->setObjectName("table_view_query_money");
        table_view_query_money->setGeometry(QRect(70, 110, 559, 192));
        table_view_query_money->horizontalHeader()->setMinimumSectionSize(70);

        retranslateUi(ATMQueryMoneyForm);

        QMetaObject::connectSlotsByName(ATMQueryMoneyForm);
    } // setupUi

    void retranslateUi(QWidget *ATMQueryMoneyForm)
    {
        ATMQueryMoneyForm->setWindowTitle(QCoreApplication::translate("ATMQueryMoneyForm", "Form", nullptr));
        label_query_money->setText(QCoreApplication::translate("ATMQueryMoneyForm", "Tabla", nullptr));
        button_return->setText(QCoreApplication::translate("ATMQueryMoneyForm", "Regresar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ATMQueryMoneyForm: public Ui_ATMQueryMoneyForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATM_QUERY_MONEY_FORM_H
