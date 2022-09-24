/*
director - панель директора.
Краткое описание:
    Данная форма позволяет осуществить доступ к базе данных директору. В его возможности входит выполнение нескольких специализированных запросов к базе данных, просмотр которых доступен только ему.
--------------------------------------------------------------------------------
Функции, используемые в форме:
    on_certainAvto_clicked - запрос, позволяющий узнать на каких АЗС можно заправить конкретный автомобиль;
    on_sedanDTcount_clicked - запрос, сколько автомобилей с кузовом седан заправляются дизельным топливом;
    on_sortAbsense_clicked - запрос, позволяющий узнать на каких АЗС отсутствует выбранный сорт бенизна;
    on_maxAvtoAZSCount_clicked - запрос, позволяющий узнать какая АЗС может обслужить максимальное количество автомобилей;
    on_certainSortBenz_clicked - запрос, позволяющий узнать автомобили, заправляющиеся заданным сортом бензина;
    on_maxAvtoCount_clicked - запрос, позволяющий узнать автобазу с максимальным количеством автомобилей.
*/

#include "director.h"
#include "ui_director.h"
#include <QSqlQuery>
#include <QSqlRecord>

director::director(QSqlDatabase &db, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::director),
    db1(db)
{
    ui->setupUi(this);
    this->setWindowTitle("Директор");
}

director::~director()
{
    delete ui;
}

//---------------------ЗАПРОСЫ_К_БАЗЕ_ДАННЫХ-------------------------//


/*
on_certainAvto_clicked - запрос, позволяющий узнать на каких АЗС можно заправить конкретный автомобиль.
Локальные переменные:
    marka - марка автомобиля;
    model - модель автомобиля;
    query2 - запрос на получение сорта бензина заданного директором автомобиля;
    benz_sort - сорт бензина заданного директором автомобиля;
    query1 - запрос, позволяющий узнать на каких АЗС можно заправить конкретный автомобиль.
*/
void director::on_certainAvto_clicked()
{
    // Очистка таблицы перед заполнением данными
    ui->DirectorTable->clear();
    ui->DirectorTable->setRowCount(0);
    ui->DirectorTable->setColumnCount(0);

    if (db1.open()) {
        QString marka = ui->LE_marka_AZS_find->text();
        QString model = ui->LE_model_AZS_find->text();

        // Запрос, получающий сорт бензина заданного автомобиля
        QSqlQuery query2("SELECT sort_benz FROM avto WHERE marka = '" + marka + "' AND model = '" + model + "'");
        QString benz_sort = "";
        while (query2.next()) {
            benz_sort = query2.value(0).toString();
        }

        // Поиск открытой АЗС для заданного автомобиля с полученным в запросе к базе данных сортом бензина
        QSqlQuery query1("SELECT AZS.name, AZS.sort_benz, AZS.condition FROM AZS INNER JOIN avto ON AZS.sort_benz LIKE '%" + benz_sort + "%' WHERE avto.marka = '" + marka + "' AND avto.model = '" + model + "' AND AZS.condition = 'Открыта';");

        // Установка заголовков таблицы
        ui->DirectorTable->setShowGrid(true);
        ui->DirectorTable->setRowCount(query1.size());
        ui->DirectorTable->setColumnCount(query1.record().count());
        ui->DirectorTable->verticalHeader()->setVisible(false);
        ui->DirectorTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        ui->DirectorTable->setHorizontalHeaderLabels(QStringList() = {"Название АЗС", "Сорт бензина", "Состояние АЗС"});

        int index = 0;
        while(query1.next()) {
            ui->DirectorTable->insertRow(index);
            for (int i = 0; i < query1.record().count(); i++)
                ui->DirectorTable->setItem(index, i, new QTableWidgetItem(query1.value(i).toString()));
            index++;
        }
    }
}

/*
on_sedanDTcount_clicked - запрос, сколько автомобилей с кузовом седан заправляются дизельным топливом.
Локальные переменные:
    count - количество автомобилей;
    query - запрос, сколько автомобилей с кузовом седан заправляются дизельным топливом.
*/
void director::on_sedanDTcount_clicked()
{
    // Очистка таблицы перед заполнением данными
    ui->DirectorTable->clear();
    ui->DirectorTable->setRowCount(0);
    ui->DirectorTable->setColumnCount(0);

    if (db1.open()) {
        QSqlQuery query("SELECT ID_avto, model, marka, type, sort_benz FROM avto WHERE type = 'Седан' AND sort_benz = 'ДТ'");

        // Установка заголовков таблицы
        ui->DirectorTable->setShowGrid(true);
        ui->DirectorTable->setRowCount(query.size());
        ui->DirectorTable->setColumnCount(query.record().count());
        ui->DirectorTable->verticalHeader()->setVisible(false);
        ui->DirectorTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        ui->DirectorTable->setHorizontalHeaderLabels(QStringList() = {"ID автомобиля", "Модель", "Марка", "Тип", "Сорт бензина"});

        int index = 0, count = 0;
        while (query.next()) {
            ui->DirectorTable->insertRow(index);
            for (int i = 0; i < query.record().count(); i++)
                ui->DirectorTable->setItem(index, i, new QTableWidgetItem(query.value(i).toString()));
            index++; count++;
        }

        if (!query.exec())
            QMessageBox::warning(this, "Внимание!", "Не удалось найти количество автомобилей!");
        else {
            QMessageBox::about(this, "Запрос выполнен!", "Количество автомобилей: " + QString::number(count));
        }
    }
}

/*
on_sortAbsense_clicked - запрос, позволяющий узнать на каких АЗС отсутствует выбранный сорт бенизна.
Локальные переменные:
    outOfSort_benz - отсутствующий сорт бензина, задаваемый директором на форме;
    query - запрос, позволяющий узнать на каких АЗС отсутствует выбранный сорт бенизна.
*/
void director::on_sortAbsense_clicked()
{
    // Очистка таблицы перед заполнением данными
    ui->DirectorTable->clear();
    ui->DirectorTable->setRowCount(0);
    ui->DirectorTable->setColumnCount(0);

    if (db1.open()) {
        QString outOfSort_benz = ui->LE_sortAbsense->text();
        QSqlQuery query("SELECT AZS.name, AZS.sort_benz FROM AZS WHERE AZS.sort_benz NOT LIKE '%" + outOfSort_benz + "%';");

        // Установка заголовков таблицы
        ui->DirectorTable->setShowGrid(true);
        ui->DirectorTable->setRowCount(query.size());
        ui->DirectorTable->setColumnCount(query.record().count());
        ui->DirectorTable->verticalHeader()->setVisible(false);
        ui->DirectorTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        ui->DirectorTable->setHorizontalHeaderLabels(QStringList() = {"Название АЗС", "Сорт бензина"});

        int index = 0;
        while(query.next()) {
            ui->DirectorTable->insertRow(index);
            for (int i = 0; i < query.record().count(); i++)
                ui->DirectorTable->setItem(index, i, new QTableWidgetItem(query.value(i).toString()));
            index++;
        }
    }
}

/*
on_maxAvtoAZSCount_clicked - запрос, позволяющий узнать какая АЗС может обслужить максимальное количество автомобилей.
Локальные переменные:
    index, k, i - счетчики циклов;
    query - запрос, получающий все сорта бензина существующих в базе данных автомобилей;
    query2 - запрос, позволяющий узнать какая АЗС может обслужить максимальное количество автомобилей.
*/
void director::on_maxAvtoAZSCount_clicked()
{
    // Очистка таблицы перед заполнением данными
    ui->DirectorTable->clear();
    ui->DirectorTable->setRowCount(0);
    ui->DirectorTable->setColumnCount(0);

    if (db1.open()) {

        // Получение сортов бензина
        QSqlQuery query("SELECT DISTINCT sort_benz FROM avto");
        int index = 0, k = 0;
        while(query.next()) {
            // Поиск АЗС с подстановкой сортов бензина в запрос
            QSqlQuery query2("SELECT name, sort_benz, MAX(sum_max_found) FROM (SELECT name, sort_benz, SUM(max_found) as sum_max_found FROM (SELECT name, sort_benz, MAX(found_count) AS max_found FROM (SELECT AZS.name, AZS.sort_benz, COUNT(*) as found_count FROM AZS INNER JOIN avto ON avto.sort_benz LIKE '%"+ query.value(index).toString() +"%' AND AZS.sort_benz LIKE '%"+ query.value(index).toString() +"%' GROUP BY AZS.ID_AZS)))");

            while (query2.next()) {
                // Установка заголовков таблицы
                ui->DirectorTable->setShowGrid(true);
                ui->DirectorTable->setRowCount(1);
                ui->DirectorTable->setColumnCount(query2.record().count());
                ui->DirectorTable->verticalHeader()->setVisible(false);
                ui->DirectorTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
                ui->DirectorTable->setHorizontalHeaderLabels(QStringList() = {"Название АЗС", "Сорта бензина, \nдоступные на АЗС", "Количество сортов бензина, \nкоторыми можно заправить \nмаксимальное количество автомобилей"});

                ui->DirectorTable->insertRow(k);
                for (int i = 0; i < query2.record().count(); i++)
                    ui->DirectorTable->setItem(k, i, new QTableWidgetItem(query2.value(i).toString()));
                k++;
            }
        }
    }
}

/*
on_certainSortBenz_clicked - запрос, позволяющий узнать автомобили, заправляющиеся заданным сортом бензина.
Локальные переменные:
    marka_certain_sort - заданный сорт бензина;
    query - запрос к базе данных.
*/
void director::on_certainSortBenz_clicked()
{
    // Очистка таблицы перед заполнением данными
    ui->DirectorTable->clear();
    ui->DirectorTable->setRowCount(0);
    ui->DirectorTable->setColumnCount(0);

    if (db1.open()) {
        QString marka_certain_sort = ui->LE_marka_certain_sort->text();
        QSqlQuery query("SELECT * FROM avto WHERE sort_benz = '" + marka_certain_sort + "';");

        // Установка заголовков таблицы
        ui->DirectorTable->setShowGrid(true);
        ui->DirectorTable->setRowCount(query.size());
        ui->DirectorTable->setColumnCount(query.record().count());
        ui->DirectorTable->verticalHeader()->setVisible(false);
        ui->DirectorTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        ui->DirectorTable->setHorizontalHeaderLabels(QStringList() = {"ID автомобиля", "ID автобазы", "Сорт бензина", "Модель", "Марка", "Тип", "Гос. номер"});

        int index = 0;
        while(query.next()) {
            ui->DirectorTable->insertRow(index);
            for (int i = 0; i < query.record().count(); i++)
                ui->DirectorTable->setItem(index, i, new QTableWidgetItem(query.value(i).toString()));
            index++;
        }
    }
}

/*
on_maxAvtoCount_clicked - запрос, позволяющий узнать автобазу с максимальным количеством автомобилей.
Локальная переменная:
    query - запрос к базе данных.
*/
void director::on_maxAvtoCount_clicked()
{
    // Очистка таблицы перед заполнением данными
    ui->DirectorTable->clear();
    ui->DirectorTable->setRowCount(0);
    ui->DirectorTable->setColumnCount(0);

    if (db1.open()) {
        QSqlQuery query("SELECT ID_avtobaza, number, address, MAX(found_count) FROM (SELECT avtobaza.ID_avtobaza, avtobaza.number, avtobaza.address, COUNT(*) AS found_count FROM avtobaza INNER JOIN avto ON avto.FK_ID_avtobaza = avtobaza.ID_avtobaza GROUP BY avtobaza.ID_avtobaza);");

        // Установка заголовков таблицы
        ui->DirectorTable->setShowGrid(true);
        ui->DirectorTable->setRowCount(query.size());
        ui->DirectorTable->setColumnCount(query.record().count());
        ui->DirectorTable->verticalHeader()->setVisible(false);
        ui->DirectorTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        ui->DirectorTable->setHorizontalHeaderLabels(QStringList() = {"ID автобазы", "Номер", "Адрес", "Максимальное \nколичество \nавтомобилей"});

        int index = 0;
        while(query.next()) {
            ui->DirectorTable->insertRow(index);
            for (int i = 0; i < query.record().count(); i++)
                ui->DirectorTable->setItem(index, i, new QTableWidgetItem(query.value(i).toString()));
            index++;
        }
    }
}

