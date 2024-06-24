/********************************************************************************
** Form generated from reading UI file 'atm_welcome_form.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATM_WELCOME_FORM_H
#define UI_ATM_WELCOME_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ATMWelcomeForm
{
public:
    QPushButton *button_enter;
    QLabel *label_welcome;
    QFrame *line_welcome;
    QPushButton *button_exit;

    void setupUi(QWidget *ATMWelcomeForm)
    {
        if (ATMWelcomeForm->objectName().isEmpty())
            ATMWelcomeForm->setObjectName("ATMWelcomeForm");
        ATMWelcomeForm->resize(700, 400);
        button_enter = new QPushButton(ATMWelcomeForm);
        button_enter->setObjectName("button_enter");
        button_enter->setGeometry(QRect(200, 280, 100, 30));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        button_enter->setFont(font);
        button_enter->setAutoDefault(false);
        button_enter->setFlat(false);
        label_welcome = new QLabel(ATMWelcomeForm);
        label_welcome->setObjectName("label_welcome");
        label_welcome->setGeometry(QRect(50, 50, 571, 91));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        label_welcome->setFont(font1);
        line_welcome = new QFrame(ATMWelcomeForm);
        line_welcome->setObjectName("line_welcome");
        line_welcome->setGeometry(QRect(120, 150, 451, 21));
        line_welcome->setFrameShape(QFrame::HLine);
        line_welcome->setFrameShadow(QFrame::Sunken);
        button_exit = new QPushButton(ATMWelcomeForm);
        button_exit->setObjectName("button_exit");
        button_exit->setEnabled(true);
        button_exit->setGeometry(QRect(380, 280, 100, 30));
        button_exit->setFont(font);

        retranslateUi(ATMWelcomeForm);

        button_enter->setDefault(true);


        QMetaObject::connectSlotsByName(ATMWelcomeForm);
    } // setupUi

    void retranslateUi(QWidget *ATMWelcomeForm)
    {
        ATMWelcomeForm->setWindowTitle(QCoreApplication::translate("ATMWelcomeForm", "ATMWelcomeForm", nullptr));
        button_enter->setText(QCoreApplication::translate("ATMWelcomeForm", "Ingresar", nullptr));
        label_welcome->setText(QCoreApplication::translate("ATMWelcomeForm", "Bienvenido al sistema de cajero autom\303\241tico", nullptr));
        button_exit->setText(QCoreApplication::translate("ATMWelcomeForm", "Salir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ATMWelcomeForm: public Ui_ATMWelcomeForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATM_WELCOME_FORM_H
