#include <QString>
#include <QDebug>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QSqlQueryModel>
#include <QScreen>
#include "atm_transfer_money_form.h"
#include "atm_main_function_form.h"
#include "ui_atm_transfer_money_form.h"
//guardar el id tarjeta
QString card_id_;

ATMTransferMoneyForm::ATMTransferMoneyForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ATMTransferMoneyForm)
{
    ui->setupUi(this);
    //titulo de mi ventana
    this->setWindowTitle("Interfaz de transferencia");
    this->setFixedSize(this->width(), this->height());
}

ATMTransferMoneyForm::~ATMTransferMoneyForm()
{
    delete ui;
}

void ATMTransferMoneyForm::on_button_accept_a_clicked()
{
    //guarda el id de la tarjeta a recibir
    card_id_ = ui->line_edit_card_id->text();
    //varibles que permitan entar a mi BD
    QString tables = " user_information ";
    QString properties = " user_name, card_id ";
    QString condition = " card_id = ";
    //crear consulta
    QSqlQuery query;
    query.exec("select * from user_information");
    //contador que indica si existe tarjeta
    int flag = 0;
    int index;
    //irea en todas las filas de BD
    while (query.next()) {
        QSqlRecord record = query.record();
        index = record.indexOf("card_id");
        //verifica si existe
        if (query.value(index).toString() == card_id_) {
            flag = 1;
            break;
        }
    }
    //manda mensaje de error si no encuentra id ingreasdo
    if (!flag) {
        QMessageBox::warning(this, tr("error"), tr("¡No existe tal número de cuenta de tarjeta bancaria!"), tr("Sí"));
        ui->line_edit_card_id->clear();
        ui->line_edit_card_money->clear();
        return ;
    }
    //crea un modelo sql para obetener la informacion del usuario
    QSqlQueryModel *card_info_query_model = new QSqlQueryModel();
    card_info_query_model->setQuery("select" + properties + "from" + tables +
                                    "where"  + condition + card_id_);
    //ejecuta una consulta sql
    //crea una tabla que muestre al usuario con el id
    card_info_query_model->setHeaderData(0, Qt::Horizontal, tr("nombre de usuario"));
    card_info_query_model->setHeaderData(1, Qt::Horizontal, tr("Número de cuenta de tarjeta bancaria"));
    ui->table_view_card_info->setEditTriggers(
        QAbstractItemView::NoEditTriggers);
    ui->table_view_card_info->setModel(card_info_query_model);
    ui->table_view_card_info->show();
}
//boton acept de mi interfaz
void ATMTransferMoneyForm::on_button_accept_b_clicked()
{
    //guarda el dinero a transferir
    QString card_money = ui->line_edit_card_money->text();

    if (card_money.toInt() == 0) {
        QMessageBox::warning(this, tr("advertir"), tr("¡El monto de la transferencia no puede estar vacío!"), tr("Sí"));
        return ;
    }

    QString table     = " card_information ";
    QString property  = " card_money ";
    QString condition = " card_id = " + card_id_;
    //consulta a mi BD
    QSqlQuery query;
    query.exec("select" + property + "from" + table + "where" + condition);
    //auxliares
    int index;
    int money;
    //itera sobre la BD
    if (query.next()) {
        QSqlRecord record;
        record = query.record();
        index  = record.indexOf("card_money");
        money = query.value(index).toInt();
    }
    else {
        //indica si falla la operacion
        QMessageBox::warning(this, tr("error"), tr("¡operación fallida!"), tr("Sí"));
        return ;
    }
    //guara el dinero total con el deposito
    QString money_all = QString::number((card_money.toInt() + money), 10);
    //actulizar mi BD
    query.clear();
    query.exec("update" + table + "set" + property + "=" + money_all + " where"
               + condition);
    //indica si ocuttio una tranferia
    if (query.isActive()) {
        QMessageBox::information(this, tr("pista"), tr("¡Transferencia exitosa!"), tr("Sí"));
        return ;
    }
    else {
        QMessageBox::warning(this, tr("error"), tr("¡La transferencia falló!"), tr("Sí"));
        return ;
    }
}
// boton reset que reinicia los valores de mi interfaz
void ATMTransferMoneyForm::on_button_reset_clicked()
{
    ui->line_edit_card_id->clear();
    ui->line_edit_card_money->clear();
}
// boton return que regresa a mi ventana anterior
void ATMTransferMoneyForm::on_button_return_clicked()
{
    ATMMainFunctionForm *atm_main_function = new ATMMainFunctionForm();
    atm_main_function->show();

    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    atm_main_function->move(
        (screenGeometry.width() - atm_main_function->width()) / 2,
        (screenGeometry.height() - atm_main_function->height()) / 2
        );
    this->close();
}
