/********************************************************************************
** Form generated from reading UI file 'atm_action_process_form.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATM_ACTION_PROCESS_FORM_H
#define UI_ATM_ACTION_PROCESS_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ATMActionProcessForm
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *vertical_layout;
    QLabel *label_process;
    QProgressBar *progress_bar;

    void setupUi(QWidget *ATMActionProcessForm)
    {
        if (ATMActionProcessForm->objectName().isEmpty())
            ATMActionProcessForm->setObjectName("ATMActionProcessForm");
        ATMActionProcessForm->resize(700, 400);
        verticalLayoutWidget = new QWidget(ATMActionProcessForm);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(160, 150, 456, 80));
        vertical_layout = new QVBoxLayout(verticalLayoutWidget);
        vertical_layout->setObjectName("vertical_layout");
        vertical_layout->setContentsMargins(0, 0, 0, 0);
        label_process = new QLabel(verticalLayoutWidget);
        label_process->setObjectName("label_process");
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label_process->setFont(font);
        label_process->setAlignment(Qt::AlignCenter);

        vertical_layout->addWidget(label_process);

        progress_bar = new QProgressBar(verticalLayoutWidget);
        progress_bar->setObjectName("progress_bar");
        progress_bar->setValue(0);

        vertical_layout->addWidget(progress_bar);


        retranslateUi(ATMActionProcessForm);

        QMetaObject::connectSlotsByName(ATMActionProcessForm);
    } // setupUi

    void retranslateUi(QWidget *ATMActionProcessForm)
    {
        ATMActionProcessForm->setWindowTitle(QCoreApplication::translate("ATMActionProcessForm", "Form", nullptr));
        label_process->setText(QCoreApplication::translate("ATMActionProcessForm", "La operaci\303\263n se est\303\241 ejecutando, por favor espere...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ATMActionProcessForm: public Ui_ATMActionProcessForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATM_ACTION_PROCESS_FORM_H
