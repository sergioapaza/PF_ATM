#include <QString>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QScreen>
//header
#include "atm_query_money_form.h"
#include "atm_main_function_form.h"
#include "ui_atm_query_money_form.h"
//declarar una varible golbal para guardad id de tarjeta
extern QString g_card_id;

ATMQueryMoneyForm::ATMQueryMoneyForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ATMQueryMoneyForm)
{
    ui->setupUi(this);
    //titlo de mi ventana
    this->setWindowTitle("Interfaz de consulta");
    this->setFixedSize(this->width(), this->height());
    //varibles para ingresar a mi BD
    QString tables = " user_information, card_information ";
    QString properties =
        " user_name, user_information.card_id, card_pwd, card_money ";
    QString condition_a =
       " user_information.card_id = card_information.card_id ";
    QString condition_b = " user_information.card_id = ";
    //seleccionar ami usuario que conincida con el id de mi tarjeta
    QSqlQueryModel *card_info_query_model = new QSqlQueryModel();
    card_info_query_model->setQuery("select" + properties + "from" + tables +
                                    "where"  + condition_a + "and" +
                                    condition_b + g_card_id);
    //establecer encabezados de mi olumna
    card_info_query_model->setHeaderData(0, Qt::Horizontal, tr("usuario"));
    card_info_query_model->setHeaderData(1, Qt::Horizontal, tr("Número de tarjeta "));
    card_info_query_model->setHeaderData(2, Qt::Horizontal, tr("contraseña de tarjeta "));
    card_info_query_model->setHeaderData(3, Qt::Horizontal, tr("monto de la tarjeta "));
    //desactivar la edicion
    //ui->table_view_query_money->setEditTriggers(QAbstractItemView::NoEditTriggers);
    //establece modelo de vista de mi tabla y indica el tamanio
    ui->table_view_query_money->setModel(card_info_query_model);
    ui->table_view_query_money->setColumnWidth(0, 135);
    ui->table_view_query_money->setColumnWidth(1, 135);
    ui->table_view_query_money->setColumnWidth(2, 135);
    ui->table_view_query_money->setColumnWidth(3, 135);
    ui->table_view_query_money->show();
}

ATMQueryMoneyForm::~ATMQueryMoneyForm()
{
    delete ui;
}

// boton return retornar a mi ventana anterior
void ATMQueryMoneyForm::on_button_return_clicked()
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
