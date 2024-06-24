/********************************************************************************
** Form generated from reading UI file 'atm_main_function_form.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATM_MAIN_FUNCTION_FORM_H
#define UI_ATM_MAIN_FUNCTION_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ATMMainFunctionForm
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *vertical_layout_a;
    QPushButton *button_query_money;
    QPushButton *button_transfer_money;
    QPushButton *button_change_pwd;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *vertical_layout_b;
    QPushButton *button_save_money;
    QPushButton *button_take_money;
    QPushButton *button_return;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontal_layout_a;
    QLabel *label_timer;
    QLCDNumber *lcd_timer;
    QLabel *label_main;
    QFrame *line;
    QFrame *line_2;
    QTextBrowser *text_browser_info;

    void setupUi(QWidget *ATMMainFunctionForm)
    {
        if (ATMMainFunctionForm->objectName().isEmpty())
            ATMMainFunctionForm->setObjectName("ATMMainFunctionForm");
        ATMMainFunctionForm->resize(829, 409);
        verticalLayoutWidget = new QWidget(ATMMainFunctionForm);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 70, 205, 291));
        vertical_layout_a = new QVBoxLayout(verticalLayoutWidget);
        vertical_layout_a->setObjectName("vertical_layout_a");
        vertical_layout_a->setContentsMargins(0, 0, 0, 0);
        button_query_money = new QPushButton(verticalLayoutWidget);
        button_query_money->setObjectName("button_query_money");
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setStrikeOut(false);
        button_query_money->setFont(font);

        vertical_layout_a->addWidget(button_query_money);

        button_transfer_money = new QPushButton(verticalLayoutWidget);
        button_transfer_money->setObjectName("button_transfer_money");
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        button_transfer_money->setFont(font1);

        vertical_layout_a->addWidget(button_transfer_money);

        button_change_pwd = new QPushButton(verticalLayoutWidget);
        button_change_pwd->setObjectName("button_change_pwd");
        button_change_pwd->setFont(font1);

        vertical_layout_a->addWidget(button_change_pwd);

        verticalLayoutWidget_2 = new QWidget(ATMMainFunctionForm);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(540, 90, 160, 281));
        vertical_layout_b = new QVBoxLayout(verticalLayoutWidget_2);
        vertical_layout_b->setObjectName("vertical_layout_b");
        vertical_layout_b->setContentsMargins(0, 0, 0, 0);
        button_save_money = new QPushButton(verticalLayoutWidget_2);
        button_save_money->setObjectName("button_save_money");
        button_save_money->setFont(font1);

        vertical_layout_b->addWidget(button_save_money);

        button_take_money = new QPushButton(verticalLayoutWidget_2);
        button_take_money->setObjectName("button_take_money");
        button_take_money->setFont(font1);

        vertical_layout_b->addWidget(button_take_money);

        button_return = new QPushButton(verticalLayoutWidget_2);
        button_return->setObjectName("button_return");
        button_return->setFont(font1);

        vertical_layout_b->addWidget(button_return);

        horizontalLayoutWidget = new QWidget(ATMMainFunctionForm);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(540, 20, 226, 31));
        horizontal_layout_a = new QHBoxLayout(horizontalLayoutWidget);
        horizontal_layout_a->setObjectName("horizontal_layout_a");
        horizontal_layout_a->setContentsMargins(0, 0, 0, 0);
        label_timer = new QLabel(horizontalLayoutWidget);
        label_timer->setObjectName("label_timer");
        label_timer->setFont(font1);

        horizontal_layout_a->addWidget(label_timer);

        lcd_timer = new QLCDNumber(horizontalLayoutWidget);
        lcd_timer->setObjectName("lcd_timer");
        lcd_timer->setFont(font);
        lcd_timer->setFrameShape(QFrame::NoFrame);

        horizontal_layout_a->addWidget(lcd_timer);

        label_main = new QLabel(ATMMainFunctionForm);
        label_main->setObjectName("label_main");
        label_main->setGeometry(QRect(250, 30, 231, 111));
        QFont font2;
        font2.setPointSize(18);
        font2.setBold(true);
        label_main->setFont(font2);
        line = new QFrame(ATMMainFunctionForm);
        line->setObjectName("line");
        line->setGeometry(QRect(210, 80, 16, 281));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(ATMMainFunctionForm);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(510, 90, 20, 271));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        text_browser_info = new QTextBrowser(ATMMainFunctionForm);
        text_browser_info->setObjectName("text_browser_info");
        text_browser_info->setGeometry(QRect(240, 140, 256, 211));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        text_browser_info->setFont(font3);
        text_browser_info->setFrameShape(QFrame::NoFrame);
        text_browser_info->setFrameShadow(QFrame::Sunken);

        retranslateUi(ATMMainFunctionForm);

        QMetaObject::connectSlotsByName(ATMMainFunctionForm);
    } // setupUi

    void retranslateUi(QWidget *ATMMainFunctionForm)
    {
        ATMMainFunctionForm->setWindowTitle(QCoreApplication::translate("ATMMainFunctionForm", "Form", nullptr));
        button_query_money->setText(QCoreApplication::translate("ATMMainFunctionForm", "Consulta", nullptr));
        button_transfer_money->setText(QCoreApplication::translate("ATMMainFunctionForm", "Transferir", nullptr));
        button_change_pwd->setText(QCoreApplication::translate("ATMMainFunctionForm", "< Cambiar contrase\303\261a", nullptr));
        button_save_money->setText(QCoreApplication::translate("ATMMainFunctionForm", "Dep\303\263sito", nullptr));
        button_take_money->setText(QCoreApplication::translate("ATMMainFunctionForm", "Retiro", nullptr));
        button_return->setText(QCoreApplication::translate("ATMMainFunctionForm", "Volver", nullptr));
        label_timer->setText(QCoreApplication::translate("ATMMainFunctionForm", "Cuenta regresiva:", nullptr));
        label_main->setText(QCoreApplication::translate("ATMMainFunctionForm", "Por favor seleccione el \n"
" servicio requerido", nullptr));
        text_browser_info->setHtml(QCoreApplication::translate("ATMMainFunctionForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:12pt; font-weight:700; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\302\241Bienvenido al cajero autom\303\241tico! Seleccione el servicio apropiado dentro de la cuenta regresiva de 30 segundos. </p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ATMMainFunctionForm: public Ui_ATMMainFunctionForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATM_MAIN_FUNCTION_FORM_H
