/********************************************************************************
** Form generated from reading UI file 'atm_login_to_main_form.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATM_LOGIN_TO_MAIN_FORM_H
#define UI_ATM_LOGIN_TO_MAIN_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ATMLoginToMainForm
{
public:
    QLabel *label_login;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontal_layout_a;
    QLabel *label_id;
    QLineEdit *line_edit_id;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontal_layout_b;
    QLabel *label_pwd;
    QLineEdit *line_edit_pwd;
    QPushButton *button_login;
    QPushButton *button_return;
    QFrame *line_login_b;
    QFrame *line_login_a;

    void setupUi(QWidget *ATMLoginToMainForm)
    {
        if (ATMLoginToMainForm->objectName().isEmpty())
            ATMLoginToMainForm->setObjectName("ATMLoginToMainForm");
        ATMLoginToMainForm->setEnabled(true);
        ATMLoginToMainForm->resize(700, 400);
        QFont font;
        font.setPointSize(14);
        ATMLoginToMainForm->setFont(font);
        label_login = new QLabel(ATMLoginToMainForm);
        label_login->setObjectName("label_login");
        label_login->setGeometry(QRect(40, 0, 631, 91));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        label_login->setFont(font1);
        horizontalLayoutWidget = new QWidget(ATMLoginToMainForm);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(190, 129, 271, 71));
        horizontal_layout_a = new QHBoxLayout(horizontalLayoutWidget);
        horizontal_layout_a->setObjectName("horizontal_layout_a");
        horizontal_layout_a->setContentsMargins(0, 0, 0, 0);
        label_id = new QLabel(horizontalLayoutWidget);
        label_id->setObjectName("label_id");
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        label_id->setFont(font2);

        horizontal_layout_a->addWidget(label_id);

        line_edit_id = new QLineEdit(horizontalLayoutWidget);
        line_edit_id->setObjectName("line_edit_id");

        horizontal_layout_a->addWidget(line_edit_id);

        horizontalLayoutWidget_2 = new QWidget(ATMLoginToMainForm);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(190, 210, 320, 61));
        horizontal_layout_b = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontal_layout_b->setObjectName("horizontal_layout_b");
        horizontal_layout_b->setContentsMargins(0, 0, 0, 0);
        label_pwd = new QLabel(horizontalLayoutWidget_2);
        label_pwd->setObjectName("label_pwd");
        label_pwd->setFont(font2);

        horizontal_layout_b->addWidget(label_pwd);

        line_edit_pwd = new QLineEdit(horizontalLayoutWidget_2);
        line_edit_pwd->setObjectName("line_edit_pwd");

        horizontal_layout_b->addWidget(line_edit_pwd);

        button_login = new QPushButton(ATMLoginToMainForm);
        button_login->setObjectName("button_login");
        button_login->setGeometry(QRect(190, 320, 100, 30));
        QFont font3;
        font3.setPointSize(14);
        font3.setBold(true);
        button_login->setFont(font3);
        button_return = new QPushButton(ATMLoginToMainForm);
        button_return->setObjectName("button_return");
        button_return->setGeometry(QRect(390, 320, 100, 30));
        button_return->setFont(font3);
        line_login_b = new QFrame(ATMLoginToMainForm);
        line_login_b->setObjectName("line_login_b");
        line_login_b->setGeometry(QRect(187, 290, 301, 20));
        line_login_b->setFrameShape(QFrame::HLine);
        line_login_b->setFrameShadow(QFrame::Sunken);
        line_login_a = new QFrame(ATMLoginToMainForm);
        line_login_a->setObjectName("line_login_a");
        line_login_a->setGeometry(QRect(190, 90, 301, 20));
        line_login_a->setFrameShape(QFrame::HLine);
        line_login_a->setFrameShadow(QFrame::Sunken);

        retranslateUi(ATMLoginToMainForm);

        button_login->setDefault(true);


        QMetaObject::connectSlotsByName(ATMLoginToMainForm);
    } // setupUi

    void retranslateUi(QWidget *ATMLoginToMainForm)
    {
        ATMLoginToMainForm->setWindowTitle(QCoreApplication::translate("ATMLoginToMainForm", "Form", nullptr));
        label_login->setText(QCoreApplication::translate("ATMLoginToMainForm", "introduzca el n\303\272mero de cuenta y su contrase\303\261a.", nullptr));
        label_id->setText(QCoreApplication::translate("ATMLoginToMainForm", "N\303\272mero de cuenta", nullptr));
        label_pwd->setText(QCoreApplication::translate("ATMLoginToMainForm", "Contrase\303\261a de la tarjeta", nullptr));
        button_login->setText(QCoreApplication::translate("ATMLoginToMainForm", "Acceso", nullptr));
        button_return->setText(QCoreApplication::translate("ATMLoginToMainForm", "devolver", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ATMLoginToMainForm: public Ui_ATMLoginToMainForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATM_LOGIN_TO_MAIN_FORM_H
