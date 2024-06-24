/********************************************************************************
** Form generated from reading UI file 'atm_take_money_form.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATM_TAKE_MONEY_FORM_H
#define UI_ATM_TAKE_MONEY_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ATMTakeMoneyForm
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *vertical_layout_a;
    QPushButton *button_100;
    QPushButton *button_200;
    QPushButton *button_400;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *vertical_layout_b;
    QPushButton *button_800;
    QPushButton *button_1000;
    QPushButton *button_2000;
    QPushButton *button_return;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *vertical_layout_c;
    QLabel *label_money;
    QLineEdit *line_edit_money;
    QTextBrowser *text_browser_info;
    QFrame *line_a;
    QFrame *line_b;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontal_layout_a;
    QLabel *label_timer;
    QLCDNumber *lcd_timer;
    QPushButton *button_accept;

    void setupUi(QWidget *ATMTakeMoneyForm)
    {
        if (ATMTakeMoneyForm->objectName().isEmpty())
            ATMTakeMoneyForm->setObjectName("ATMTakeMoneyForm");
        ATMTakeMoneyForm->resize(976, 519);
        verticalLayoutWidget = new QWidget(ATMTakeMoneyForm);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 90, 161, 271));
        vertical_layout_a = new QVBoxLayout(verticalLayoutWidget);
        vertical_layout_a->setObjectName("vertical_layout_a");
        vertical_layout_a->setContentsMargins(0, 0, 0, 0);
        button_100 = new QPushButton(verticalLayoutWidget);
        button_100->setObjectName("button_100");
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        button_100->setFont(font);

        vertical_layout_a->addWidget(button_100);

        button_200 = new QPushButton(verticalLayoutWidget);
        button_200->setObjectName("button_200");
        button_200->setFont(font);

        vertical_layout_a->addWidget(button_200);

        button_400 = new QPushButton(verticalLayoutWidget);
        button_400->setObjectName("button_400");
        button_400->setFont(font);

        vertical_layout_a->addWidget(button_400);

        verticalLayoutWidget_2 = new QWidget(ATMTakeMoneyForm);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(540, 90, 160, 271));
        vertical_layout_b = new QVBoxLayout(verticalLayoutWidget_2);
        vertical_layout_b->setObjectName("vertical_layout_b");
        vertical_layout_b->setContentsMargins(0, 0, 0, 0);
        button_800 = new QPushButton(verticalLayoutWidget_2);
        button_800->setObjectName("button_800");
        button_800->setFont(font);

        vertical_layout_b->addWidget(button_800);

        button_1000 = new QPushButton(verticalLayoutWidget_2);
        button_1000->setObjectName("button_1000");
        button_1000->setFont(font);

        vertical_layout_b->addWidget(button_1000);

        button_2000 = new QPushButton(verticalLayoutWidget_2);
        button_2000->setObjectName("button_2000");
        button_2000->setFont(font);

        vertical_layout_b->addWidget(button_2000);

        button_return = new QPushButton(ATMTakeMoneyForm);
        button_return->setObjectName("button_return");
        button_return->setGeometry(QRect(380, 330, 100, 30));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        button_return->setFont(font1);
        verticalLayoutWidget_3 = new QWidget(ATMTakeMoneyForm);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(221, 59, 261, 126));
        vertical_layout_c = new QVBoxLayout(verticalLayoutWidget_3);
        vertical_layout_c->setObjectName("vertical_layout_c");
        vertical_layout_c->setContentsMargins(0, 0, 0, 0);
        label_money = new QLabel(verticalLayoutWidget_3);
        label_money->setObjectName("label_money");
        QFont font2;
        font2.setPointSize(18);
        font2.setBold(true);
        label_money->setFont(font2);

        vertical_layout_c->addWidget(label_money);

        line_edit_money = new QLineEdit(verticalLayoutWidget_3);
        line_edit_money->setObjectName("line_edit_money");

        vertical_layout_c->addWidget(line_edit_money);

        text_browser_info = new QTextBrowser(ATMTakeMoneyForm);
        text_browser_info->setObjectName("text_browser_info");
        text_browser_info->setGeometry(QRect(220, 190, 256, 111));
        text_browser_info->setFrameShape(QFrame::NoFrame);
        line_a = new QFrame(ATMTakeMoneyForm);
        line_a->setObjectName("line_a");
        line_a->setGeometry(QRect(180, 90, 16, 271));
        line_a->setFrameShape(QFrame::VLine);
        line_a->setFrameShadow(QFrame::Sunken);
        line_b = new QFrame(ATMTakeMoneyForm);
        line_b->setObjectName("line_b");
        line_b->setGeometry(QRect(500, 90, 16, 261));
        line_b->setFrameShape(QFrame::VLine);
        line_b->setFrameShadow(QFrame::Sunken);
        horizontalLayoutWidget = new QWidget(ATMTakeMoneyForm);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(540, 30, 226, 31));
        horizontal_layout_a = new QHBoxLayout(horizontalLayoutWidget);
        horizontal_layout_a->setObjectName("horizontal_layout_a");
        horizontal_layout_a->setContentsMargins(0, 0, 0, 0);
        label_timer = new QLabel(horizontalLayoutWidget);
        label_timer->setObjectName("label_timer");
        label_timer->setFont(font1);

        horizontal_layout_a->addWidget(label_timer);

        lcd_timer = new QLCDNumber(horizontalLayoutWidget);
        lcd_timer->setObjectName("lcd_timer");
        lcd_timer->setFont(font1);

        horizontal_layout_a->addWidget(lcd_timer);

        button_accept = new QPushButton(ATMTakeMoneyForm);
        button_accept->setObjectName("button_accept");
        button_accept->setGeometry(QRect(220, 330, 100, 30));
        button_accept->setFont(font1);

        retranslateUi(ATMTakeMoneyForm);

        QMetaObject::connectSlotsByName(ATMTakeMoneyForm);
    } // setupUi

    void retranslateUi(QWidget *ATMTakeMoneyForm)
    {
        ATMTakeMoneyForm->setWindowTitle(QCoreApplication::translate("ATMTakeMoneyForm", "Form", nullptr));
        button_100->setText(QCoreApplication::translate("ATMTakeMoneyForm", "100", nullptr));
        button_200->setText(QCoreApplication::translate("ATMTakeMoneyForm", "200", nullptr));
        button_400->setText(QCoreApplication::translate("ATMTakeMoneyForm", "400", nullptr));
        button_800->setText(QCoreApplication::translate("ATMTakeMoneyForm", "800", nullptr));
        button_1000->setText(QCoreApplication::translate("ATMTakeMoneyForm", "1,000", nullptr));
        button_2000->setText(QCoreApplication::translate("ATMTakeMoneyForm", "2,000", nullptr));
        button_return->setText(QCoreApplication::translate("ATMTakeMoneyForm", "devolver", nullptr));
        label_money->setText(QCoreApplication::translate("ATMTakeMoneyForm", "Por favor seleccione o \n"
" ingrese el monto \n"
" del retiro", nullptr));
        text_browser_info->setHtml(QCoreApplication::translate("ATMTakeMoneyForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_timer->setText(QCoreApplication::translate("ATMTakeMoneyForm", "Cuenta regresiva:", nullptr));
        button_accept->setText(QCoreApplication::translate("ATMTakeMoneyForm", "Seguro", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ATMTakeMoneyForm: public Ui_ATMTakeMoneyForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATM_TAKE_MONEY_FORM_H
