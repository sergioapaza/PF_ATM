/********************************************************************************
** Form generated from reading UI file 'atm_change_password_form.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATM_CHANGE_PASSWORD_FORM_H
#define UI_ATM_CHANGE_PASSWORD_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ATMChangePasswordForm
{
public:
    QPushButton *button_accept;
    QPushButton *button_return;
    QPushButton *button_reset;
    QLabel *label_change_pwd;
    QFrame *line_a;
    QFrame *line_b;
    QWidget *layoutWidget;
    QHBoxLayout *horizontal_layout_b;
    QLabel *label_card_pwd_new_b;
    QLineEdit *line_edit_card_pwd_new_b;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontal_layout_a;
    QLabel *label_card_pwd_new_a;
    QLineEdit *line_edit_card_pwd_new_a;

    void setupUi(QWidget *ATMChangePasswordForm)
    {
        if (ATMChangePasswordForm->objectName().isEmpty())
            ATMChangePasswordForm->setObjectName("ATMChangePasswordForm");
        ATMChangePasswordForm->resize(676, 408);
        button_accept = new QPushButton(ATMChangePasswordForm);
        button_accept->setObjectName("button_accept");
        button_accept->setGeometry(QRect(160, 330, 111, 31));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        button_accept->setFont(font);
        button_return = new QPushButton(ATMChangePasswordForm);
        button_return->setObjectName("button_return");
        button_return->setGeometry(QRect(410, 330, 99, 31));
        button_return->setFont(font);
        button_reset = new QPushButton(ATMChangePasswordForm);
        button_reset->setObjectName("button_reset");
        button_reset->setGeometry(QRect(290, 330, 99, 31));
        button_reset->setFont(font);
        label_change_pwd = new QLabel(ATMChangePasswordForm);
        label_change_pwd->setObjectName("label_change_pwd");
        label_change_pwd->setGeometry(QRect(200, 40, 321, 31));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        label_change_pwd->setFont(font1);
        line_a = new QFrame(ATMChangePasswordForm);
        line_a->setObjectName("line_a");
        line_a->setGeometry(QRect(170, 80, 341, 16));
        line_a->setFrameShape(QFrame::HLine);
        line_a->setFrameShadow(QFrame::Sunken);
        line_b = new QFrame(ATMChangePasswordForm);
        line_b->setObjectName("line_b");
        line_b->setGeometry(QRect(180, 300, 331, 16));
        line_b->setFrameShape(QFrame::HLine);
        line_b->setFrameShadow(QFrame::Sunken);
        layoutWidget = new QWidget(ATMChangePasswordForm);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(190, 230, 391, 31));
        horizontal_layout_b = new QHBoxLayout(layoutWidget);
        horizontal_layout_b->setObjectName("horizontal_layout_b");
        horizontal_layout_b->setContentsMargins(0, 0, 0, 0);
        label_card_pwd_new_b = new QLabel(layoutWidget);
        label_card_pwd_new_b->setObjectName("label_card_pwd_new_b");
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        label_card_pwd_new_b->setFont(font2);

        horizontal_layout_b->addWidget(label_card_pwd_new_b);

        line_edit_card_pwd_new_b = new QLineEdit(layoutWidget);
        line_edit_card_pwd_new_b->setObjectName("line_edit_card_pwd_new_b");

        horizontal_layout_b->addWidget(line_edit_card_pwd_new_b);

        layoutWidget1 = new QWidget(ATMChangePasswordForm);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(190, 130, 301, 30));
        horizontal_layout_a = new QHBoxLayout(layoutWidget1);
        horizontal_layout_a->setObjectName("horizontal_layout_a");
        horizontal_layout_a->setContentsMargins(0, 0, 0, 0);
        label_card_pwd_new_a = new QLabel(layoutWidget1);
        label_card_pwd_new_a->setObjectName("label_card_pwd_new_a");
        label_card_pwd_new_a->setFont(font2);

        horizontal_layout_a->addWidget(label_card_pwd_new_a);

        line_edit_card_pwd_new_a = new QLineEdit(layoutWidget1);
        line_edit_card_pwd_new_a->setObjectName("line_edit_card_pwd_new_a");

        horizontal_layout_a->addWidget(line_edit_card_pwd_new_a);


        retranslateUi(ATMChangePasswordForm);

        QMetaObject::connectSlotsByName(ATMChangePasswordForm);
    } // setupUi

    void retranslateUi(QWidget *ATMChangePasswordForm)
    {
        ATMChangePasswordForm->setWindowTitle(QCoreApplication::translate("ATMChangePasswordForm", "Form", nullptr));
        button_accept->setText(QCoreApplication::translate("ATMChangePasswordForm", "confirmar", nullptr));
        button_return->setText(QCoreApplication::translate("ATMChangePasswordForm", "Regresar", nullptr));
        button_reset->setText(QCoreApplication::translate("ATMChangePasswordForm", "reiniciar", nullptr));
        label_change_pwd->setText(QCoreApplication::translate("ATMChangePasswordForm", "cambiar la contrase\303\261a", nullptr));
        label_card_pwd_new_b->setText(QCoreApplication::translate("ATMChangePasswordForm", "Repita contrasenia", nullptr));
        label_card_pwd_new_a->setText(QCoreApplication::translate("ATMChangePasswordForm", "Nueva contrase\303\261a:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ATMChangePasswordForm: public Ui_ATMChangePasswordForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATM_CHANGE_PASSWORD_FORM_H
