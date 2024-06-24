/********************************************************************************
** Form generated from reading UI file 'atm_transfer_money_form.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATM_TRANSFER_MONEY_FORM_H
#define UI_ATM_TRANSFER_MONEY_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ATMTransferMoneyForm
{
public:
    QLabel *label_transfer_money;
    QFrame *line_a;
    QPushButton *button_accept_a;
    QPushButton *button_return;
    QPushButton *button_accept_b;
    QFrame *line_b;
    QWidget *layoutWidget;
    QVBoxLayout *vertical_layout_a;
    QLabel *label_card_id;
    QLineEdit *line_edit_card_id;
    QWidget *layoutWidget1;
    QVBoxLayout *vertical_layout_b;
    QLabel *label_card_money;
    QLineEdit *line_edit_card_money;
    QWidget *layoutWidget2;
    QVBoxLayout *vertical_layout_c;
    QLabel *label_card_info;
    QTableView *table_view_card_info;
    QPushButton *button_reset;
    QFrame *line;

    void setupUi(QWidget *ATMTransferMoneyForm)
    {
        if (ATMTransferMoneyForm->objectName().isEmpty())
            ATMTransferMoneyForm->setObjectName("ATMTransferMoneyForm");
        ATMTransferMoneyForm->resize(772, 429);
        label_transfer_money = new QLabel(ATMTransferMoneyForm);
        label_transfer_money->setObjectName("label_transfer_money");
        label_transfer_money->setGeometry(QRect(260, 10, 181, 51));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        label_transfer_money->setFont(font);
        line_a = new QFrame(ATMTransferMoneyForm);
        line_a->setObjectName("line_a");
        line_a->setGeometry(QRect(40, 70, 611, 16));
        line_a->setFrameShape(QFrame::HLine);
        line_a->setFrameShadow(QFrame::Sunken);
        button_accept_a = new QPushButton(ATMTransferMoneyForm);
        button_accept_a->setObjectName("button_accept_a");
        button_accept_a->setGeometry(QRect(40, 300, 100, 30));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        button_accept_a->setFont(font1);
        button_return = new QPushButton(ATMTransferMoneyForm);
        button_return->setObjectName("button_return");
        button_return->setGeometry(QRect(285, 360, 100, 30));
        button_return->setFont(font1);
        button_accept_b = new QPushButton(ATMTransferMoneyForm);
        button_accept_b->setObjectName("button_accept_b");
        button_accept_b->setGeometry(QRect(470, 300, 100, 30));
        button_accept_b->setFont(font1);
        line_b = new QFrame(ATMTransferMoneyForm);
        line_b->setObjectName("line_b");
        line_b->setGeometry(QRect(325, 90, 16, 251));
        line_b->setFrameShape(QFrame::VLine);
        line_b->setFrameShadow(QFrame::Sunken);
        layoutWidget = new QWidget(ATMTransferMoneyForm);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 110, 311, 61));
        vertical_layout_a = new QVBoxLayout(layoutWidget);
        vertical_layout_a->setObjectName("vertical_layout_a");
        vertical_layout_a->setContentsMargins(0, 0, 0, 0);
        label_card_id = new QLabel(layoutWidget);
        label_card_id->setObjectName("label_card_id");
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        label_card_id->setFont(font2);

        vertical_layout_a->addWidget(label_card_id);

        line_edit_card_id = new QLineEdit(layoutWidget);
        line_edit_card_id->setObjectName("line_edit_card_id");

        vertical_layout_a->addWidget(line_edit_card_id);

        layoutWidget1 = new QWidget(ATMTransferMoneyForm);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(40, 210, 261, 63));
        vertical_layout_b = new QVBoxLayout(layoutWidget1);
        vertical_layout_b->setObjectName("vertical_layout_b");
        vertical_layout_b->setContentsMargins(0, 0, 0, 0);
        label_card_money = new QLabel(layoutWidget1);
        label_card_money->setObjectName("label_card_money");
        label_card_money->setFont(font2);

        vertical_layout_b->addWidget(label_card_money);

        line_edit_card_money = new QLineEdit(layoutWidget1);
        line_edit_card_money->setObjectName("line_edit_card_money");

        vertical_layout_b->addWidget(line_edit_card_money);

        layoutWidget2 = new QWidget(ATMTransferMoneyForm);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(357, 110, 363, 161));
        vertical_layout_c = new QVBoxLayout(layoutWidget2);
        vertical_layout_c->setObjectName("vertical_layout_c");
        vertical_layout_c->setContentsMargins(0, 0, 0, 0);
        label_card_info = new QLabel(layoutWidget2);
        label_card_info->setObjectName("label_card_info");
        label_card_info->setFont(font2);

        vertical_layout_c->addWidget(label_card_info);

        table_view_card_info = new QTableView(layoutWidget2);
        table_view_card_info->setObjectName("table_view_card_info");

        vertical_layout_c->addWidget(table_view_card_info);

        button_reset = new QPushButton(ATMTransferMoneyForm);
        button_reset->setObjectName("button_reset");
        button_reset->setGeometry(QRect(200, 300, 100, 30));
        button_reset->setFont(font1);
        line = new QFrame(ATMTransferMoneyForm);
        line->setObjectName("line");
        line->setGeometry(QRect(30, 340, 641, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        layoutWidget2->raise();
        layoutWidget2->raise();
        layoutWidget2->raise();
        label_transfer_money->raise();
        line_a->raise();
        button_accept_a->raise();
        button_return->raise();
        button_accept_b->raise();
        line_b->raise();
        button_reset->raise();
        line->raise();

        retranslateUi(ATMTransferMoneyForm);

        QMetaObject::connectSlotsByName(ATMTransferMoneyForm);
    } // setupUi

    void retranslateUi(QWidget *ATMTransferMoneyForm)
    {
        ATMTransferMoneyForm->setWindowTitle(QCoreApplication::translate("ATMTransferMoneyForm", "Form", nullptr));
        label_transfer_money->setText(QCoreApplication::translate("ATMTransferMoneyForm", "Transferir", nullptr));
        button_accept_a->setText(QCoreApplication::translate("ATMTransferMoneyForm", "Aceptar", nullptr));
        button_return->setText(QCoreApplication::translate("ATMTransferMoneyForm", "Regresar", nullptr));
        button_accept_b->setText(QCoreApplication::translate("ATMTransferMoneyForm", "Verificar", nullptr));
        label_card_id->setText(QCoreApplication::translate("ATMTransferMoneyForm", "Ingrese el n\303\272mero de cuenta :", nullptr));
        label_card_money->setText(QCoreApplication::translate("ATMTransferMoneyForm", "Ingrese monto : ", nullptr));
        label_card_info->setText(QCoreApplication::translate("ATMTransferMoneyForm", "verifique la informaci\303\263n de la cuenta", nullptr));
        button_reset->setText(QCoreApplication::translate("ATMTransferMoneyForm", "reiniciar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ATMTransferMoneyForm: public Ui_ATMTransferMoneyForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATM_TRANSFER_MONEY_FORM_H
