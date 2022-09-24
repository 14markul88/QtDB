/*
edit - панель администратора.
Краткое описание:
    Данная форма позволяет осуществить редактирование данных в базе данных: выполнить добавление, изменение и удаление данных из базы. На форме также есть возможность загрузки данных из файла.
--------------------------------------------------------------------------------
Переменная используемая в форме:
    queryIDavtobaza - запрос к базе данных для заполнения выпадающего списка "ID автобазы";
--------------------------------------------------------------------------------
Функции, используемые в форме:
    on_insertAvto_clicked - добавление данных в таблицу "Автомобиль";
    on_insertAZS_clicked - добавление данных в таблицу "АЗС";
    on_insertAvtobaza_clicked - добавление данных в таблицу "Автобаза";
    on_changeAvto_clicked - изменение данных в таблице "Автомобиль";
    on_changeAZS_clicked - изменение данных в таблице "АЗС";
    on_changeAvtobaza_clicked - изменение данных в таблице "Автобаза";
    del - удаление данных из таблицы;
    on_delAvto_clicked - удаление данных из таблицы "Автомобиль";
    on_delAZS_clicked - удаление данных из таблицы "АЗС";
    on_delAvtobaza_clicked - удаление данных из таблицы "Автобаза";
    on_outFileAvto_clicked - выгрузка данных из файла "avto.txt" в таблицу "Автомобиль";
    on_outFileAZS_clicked - выгрузка данных из файла "AZS.txt" в таблицу "АЗС";
    on_outFileAvtobaza_clicked - выгрузка данных из файла "avtobaza.txt" в таблицу "Автобаза".
*/

#include "edit.h"
#include "ui_edit.h"
#include <QSqlQuery>
#include <QFile>
#include <QMessageBox>
#include <QSqlRecord>

edit::edit(QSqlDatabase &db, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::edit),
    db1(db)
{
    ui->setupUi(this);
    this->setWindowTitle("Администратор");

    // Заполнение выпадающего списка ID автобазы
    QSqlQuery queryIDavtobaza("SELECT ID_avtobaza FROM avtobaza");
    while (queryIDavtobaza.next()) {
        ui->CB_ID_avtobaza->addItem(queryIDavtobaza.value(0).toString());
    }
}

edit::~edit()
{
    delete ui;
}


//-------------------------ДОБАВЛЕНИЕ_ДАННЫХ--------------------------//

/*
on_insertAvto_clicked - добавление данных в таблицу "Автомобиль".
Локальные переменные:
    query - запрос к базе данных;
    FK_ID_avtobaza - внешний ключ из таблицы "Автобаза";
    sort_benz - сорт бензина;
    model - модель автомобиля;
    marka - марка автомобиля;
    type - тип кузова;
    gos_nomer - государственный номер;
*/
void edit::on_insertAvto_clicked()
{
    // Добавление данных в таблицу "Автомобиль"
    if (db1.open()) {
        QSqlQuery query;
        QString FK_ID_avtobaza = ui->CB_ID_avtobaza->currentText();
        QString sort_benz = ui->CB_FK_sort_benz->currentText();
        QString model = ui->LE_model->text();
        QString marka = ui->LE_marka->text();
        QString type = ui->LE_type->text();
        QString gos_nomer = ui->LE_gos_nomer->text();

        query.prepare("INSERT INTO avto (FK_ID_AVTOBAZA, SORT_BENZ, MODEL, MARKA, TYPE, GOS_NOMER) VALUES (:FK_ID_AVTOBAZA, :SORT_BENZ, :MODEL, :MARKA, :TYPE, :GOS_NOMER);");
        query.bindValue(":FK_ID_AVTOBAZA", FK_ID_avtobaza);
        query.bindValue(":SORT_BENZ", sort_benz);
        query.bindValue(":MODEL", model);
        query.bindValue(":MARKA", marka);
        query.bindValue(":TYPE", type);
        query.bindValue(":GOS_NOMER", gos_nomer);

        if (!query.exec()) {
            QMessageBox::warning(this, "Внимание!", "Не удалось добавить запись!");
        }
        else {
            QMessageBox::about(this, "Успех!", "Запись добавлена");
        }
    }
}

/*
on_insertAZS_clicked - добавление данных в таблицу "АЗС".
Локальные переменные:
    query - запрос к базе данных;
    name - название АЗС;
    address - адрес АЗС;
    sort_benz - сорт бензина;
    condition - состояние (открыта/закрыта).
*/
void edit::on_insertAZS_clicked()
{
    // Добавление данных в таблицу "АЗС"
    if (db1.open()) {
        QSqlQuery query;
        QString name = ui->LE_AZS_name->text();
        QString address = ui->LE_AZS_address->text();
        QString sort_benz = ui->LE_sorta_benzina->text();
        QString condition = "Закрыта";
        bool isOpen = ui->CheckBox_isOpen->isChecked();
        if (isOpen)
            condition = "Окрыта";

        query.prepare("INSERT INTO AZS (NAME, ADDRESS, SORT_BENZ, CONDITION) VALUES (:NAME, :ADDRESS, :SORT_BENZ, :CONDITION);");
        query.bindValue(":NAME", name);
        query.bindValue(":ADDRESS", address);
        query.bindValue(":SORT_BENZ", sort_benz);
        query.bindValue(":CONDITION", condition);
        if (!query.exec()) {
            QMessageBox::warning(this, "Внимание!", "Не удалось добавить запись!");
        }
        else {
            QMessageBox::about(this, "Успех!", "Запись добавлена");
        }
    }
}


/*
on_insertAvtobaza_clicked - добавление данных в таблицу "Автобаза".
Локальные переменные:
    query - запрос к базе данных;
    number - номер телефона автобазы;
    address - адрес автобазы.
*/
void edit::on_insertAvtobaza_clicked()
{
    // Добавление данных в таблицу "Автобаза"
    if (db1.open()) {
        QSqlQuery query;
        QString number = ui->LE_number->text();
        QString address = ui->LE_avtobaza_address->text();

        query.prepare("INSERT INTO avtobaza (NUMBER, ADDRESS) VALUES (:NUMBER, :ADDRESS);");
        query.bindValue(":NUMBER", number);
        query.bindValue(":ADDRESS", address);


        if (!query.exec()) {
            QMessageBox::warning(this, "Внимание!", "Не удалось добавить запись!");
        }
        else {
            QMessageBox::about(this, "Успех!", "Запись добавлена");
        }
    }
}


//--------------------------ИЗМЕНЕНИЕ_ДАННЫХ--------------------------//

/*
on_changeAvto_clicked - изменение данных в таблице "Автомобиль".
Локальные переменные:
    query - запрос к базе данных;
    ID_avto - уникальный номер автомобиля;
    FK_ID_avtobaza - внешний ключ из таблицы "Автобаза";
    sort_benz - сорт бензина;
    model - модель автомобиля;
    marka - марка автомобиля;
    type - тип кузова;
    gos_nomer - государственный номер;
*/
void edit::on_changeAvto_clicked()
{
    // Изменение данных в таблице "Автомобиль"
    if (db1.open()) {
        QSqlQuery query;
        QString ID_avto = ui->LE_ID_avto->text();
        QString FK_ID_avtobaza = ui->CB_ID_avtobaza->currentText();
        QString sort_benz = ui->CB_FK_sort_benz->currentText();
        QString model = ui->LE_model->text();
        QString marka = ui->LE_marka->text();
        QString type = ui->LE_type->text();
        QString gos_nomer = ui->LE_gos_nomer->text();

        query.prepare("UPDATE avto SET FK_ID_AVTOBAZA = :FK_ID_AVTOBAZA, SORT_BENZ = :SORT_BENZ, MODEL = :MODEL, MARKA = :MARKA, TYPE = :TYPE, GOS_NOMER = :GOS_NOMER WHERE ID_AVTO = :ID_AVTO;");
        query.bindValue(":ID_AVTO", ID_avto);
        query.bindValue(":FK_ID_AVTOBAZA", FK_ID_avtobaza);
        query.bindValue(":SORT_BENZ", sort_benz);
        query.bindValue(":MODEL", model);
        query.bindValue(":MARKA", marka);
        query.bindValue(":TYPE", type);
        query.bindValue(":GOS_NOMER", gos_nomer);

        if (!query.exec()) {
            QMessageBox::warning(this, "Внимание!","Не удалось обновить запись!");
        }
        else {
            QMessageBox::about(this, "Успех!","Запись обновлена");
        }
    }
}

/*
on_changeAZS_clicked - изменение данных в таблице "АЗС".
Локальные переменные:
    query - запрос к базе данных;
    ID_AZS - уникальный номер АЗС;
    name - название АЗС;
    address - адрес АЗС;
    sort_benz - сорт бензина;
    condition - состояние (открыта/закрыта).
*/
void edit::on_changeAZS_clicked()
{
    // Изменение данных в таблице "АЗС"
    if (db1.open()) {
        QSqlQuery query;
        QString ID_AZS = ui->LE_ID_AZS->text();
        QString name = ui->LE_AZS_name->text();
        QString address = ui->LE_AZS_address->text();
        QString sort_benz = ui->LE_sorta_benzina->text();
        QString condition = "Закрыта";
        bool isOpen = ui->CheckBox_isOpen->isChecked();
        if (isOpen)
            condition = "Окрыта";
        qDebug() << isOpen;

        query.prepare("UPDATE AZS SET NAME = :NAME, ADDRESS = :ADDRESS, SORT_BENZ = :SORT_BENZ, CONDITION = :CONDITION WHERE ID_AZS = :ID_AZS;");
        query.bindValue(":ID_AZS", ID_AZS);
        query.bindValue(":NAME", name);
        query.bindValue(":ADDRESS", address);
        query.bindValue(":SORT_BENZ", sort_benz);
        query.bindValue(":CONDITION", condition);

        if (!query.exec()) {
            QMessageBox::warning(this, "Внимание!","Не удалось обновить запись!");
        }
        else {
            QMessageBox::about(this, "Успех!","Запись обновлена");
        }
    }
}

/*
on_changeAvtobaza_clicked - изменение данных в таблице "Автобаза".
Локальные переменные:
    query - запрос к базе данных;

*/
void edit::on_changeAvtobaza_clicked()
{
    // Изменение данных в таблице "Автобаза"
    if (db1.open()) {
        QSqlQuery query;
        QString ID_avtobaza = ui->LE_ID_avtobaza->text();
        QString number = ui->LE_number->text();
        QString address = ui->LE_avtobaza_address->text();

        query.prepare("UPDATE avtobaza SET NUMBER = :NUMBER, ADDRESS = :ADDRESS WHERE ID_AVTOBAZA = :ID_AVTOBAZA;");
        query.bindValue(":ID_AVTOBAZA", ID_avtobaza);
        query.bindValue(":NUMBER", number);
        query.bindValue(":ADDRESS", address);

        if (!query.exec()) {
            QMessageBox::warning(this, "Внимание!","Не удалось обновить запись!");
        }
        else {
            QMessageBox::about(this, "Успех!","Запись обновлена");
        }
    }
}


//--------------------------ФУНКЦИЯ_УДАЛЕНИЯ--------------------------//

/*
del - удаление данных из таблицы.
Формальные параметры:
    table - название таблицы;
    field - названия поля;
    value - значение поля.
Локальная переменная:
    query - запрос к базе данных.
*/
void edit::del(QString table, QString field, QString value)
{
    if (db1.open()) {
        QSqlQuery query;
        query.prepare("DELETE FROM " + table + " WHERE " +  field + " = " + value);

        if (!query.exec())
            QMessageBox::warning(this, "Внимание!", "Не удалось удалить запись!");
        else
            QMessageBox::about(this, "Успех!", "Запись удалена");
    }
}


//--------------------------КНОПКИ_УДАЛЕНИЯ--------------------------//

/*
on_delAvto_clicked - удаление данных из таблицы "Автомобиль".
Локальная переменная:
    ID_avto - уникальный номер записи из таблицы "Автомобиль".
Функция:
    del() - удаление данных из таблицы.
*/
void edit::on_delAvto_clicked()
{
    // Удаление данных из таблицы "Автомобиль"
    QString ID_avto = ui->LE_ID_avto->text();
    del("avto", "ID_avto", ID_avto);
}

/*
on_delAZS_clicked - удаление данных из таблицы "АЗС".
Локальная переменная:
    ID_AZS - уникальный номер записи из таблицы "АЗС".
Функция:
    del() - удаление данных из таблицы.
*/
void edit::on_delAZS_clicked()
{
    // Удаление данных из таблицы "АЗС"
    QString ID_AZS = ui->LE_ID_AZS->text();
    del("AZS", "ID_AZS", ID_AZS);
}

/*
on_delAvtobaza_clicked - удаление данных из таблицы "Автобаза".
Локальная переменная:
    ID_AZS - уникальный номер записи из таблицы "Автобаза".
Функция:
    del() - удаление данных из таблицы.
*/
void edit::on_delAvtobaza_clicked()
{
    // Удаление данных из таблицы "Автобаза"
    QString ID_avtobaza = ui->LE_ID_avtobaza->text();
    del("avtobaza", "ID_avtobaza", ID_avtobaza);
}


//--------------------------КНОПКИ_ЗАГРУЗКИ_ИЗ_ФАЙЛА--------------------------//

/*
on_outFileAvto_clicked - выгрузка данных из файла "avto.txt" в таблицу "Автомобиль".
Локальные переменные:
    file - файл, из которого производится загрузка данных;
    str - строка, хранящая значение строки, полученной из запроса;
    list - список строк, полученных из запроса;
    query - запрос к базе данных.
Функции:
    outF - поток чтения из файла;
    split - разбиение строки на части по конкретному символу.
*/
void edit::on_outFileAvto_clicked()
{
    // Загрузка из файла avto.txt
    QFile file("avto.txt");
    QSqlQuery query;
    if (file.open(QIODevice::ReadOnly)) {
        QTextStream outF(&file);
        QList<QString>list;
        while (!outF.atEnd()) {
            QString str = outF.readLine();
            list = str.split(";");
            if (db1.open()) {
                query.prepare("INSERT INTO avto (ID_AVTO, FK_ID_AVTOBAZA, SORT_BENZ, MODEL, MARKA, TYPE, GOS_NOMER) VALUES (:ID_AVTO, :FK_ID_AVTOBAZA, :SORT_BENZ, :MODEL, :MARKA, :TYPE, :GOS_NOMER);");
                query.bindValue(":ID_AVTO", list[0]);
                query.bindValue(":FK_ID_AVTOBAZA", list[1]);
                query.bindValue(":SORT_BENZ", list[2]);
                query.bindValue(":MODEL", list[3]);
                query.bindValue(":MARKA", list[4]);
                query.bindValue(":TYPE", list[5]);
                query.bindValue(":GOS_NOMER", list[6]);
            }
        }
        file.close();
        if (!query.exec())
            QMessageBox::warning(this, "Внимание!","Не удалось загрузить данные из файла!");
        else
            QMessageBox::about(this, "Успех!","Данные успешно загружены из файла 'avto.txt'");
    }
}

/*
on_outFileAZS_clicked - выгрузка данных из файла "AZS.txt" в таблицу "АЗС".
Локальные переменные:
    file - файл, из которого производится загрузка данных;
    str - строка, хранящая значение строки, полученной из запроса;
    list - список строк, полученных из запроса;
    query - запрос к базе данных.
Функции:
    outF - поток чтения из файла;
    split - разбиение строки на части по конкретному символу.
*/
void edit::on_outFileAZS_clicked()
{
    // Загрузка из файла AZS.txt
    QFile file("AZS.txt");
    QSqlQuery query;
    if (file.open(QIODevice::ReadOnly)) {
        QTextStream outF(&file);
        QList<QString>list;
        while (!outF.atEnd()) {
            QString str = outF.readLine();
            list = str.split(";");
            if (db1.open()) {
                query.prepare("INSERT INTO AZS (ID_AZS, NAME, ADDRESS, SORT_BENZ, CONDITION) VALUES (:ID_AZS, :NAME, :ADDRESS, :SORT_BENZ, :CONDITION);");
                query.bindValue(":ID_AZS", list[0]);
                query.bindValue(":NAME", list[1]);
                query.bindValue(":ADDRESS", list[2]);
                query.bindValue(":SORT_BENZ", list[3]);
                query.bindValue(":CONDITION", list[4]);
            }
        }
        file.close();
        if (!query.exec())
            QMessageBox::warning(this, "Внимание!","Не удалось загрузить данные из файла!");
        else
            QMessageBox::about(this, "Успех!","Данные успешно загружены из файла 'AZS.txt'");
    }
}

/*
on_outFileAvtobaza_clicked - выгрузка данных из файла "avtobaza.txt" в таблицу "Автобаза".
Локальные переменные:
    file - файл, из которого производится загрузка данных;
    str - строка, хранящая значение строки, полученной из запроса;
    list - список строк, полученных из запроса;
    query - запрос к базе данных.
Функции:
    outF - поток чтения из файла;
    split - разбиение строки на части по конкретному символу.
*/
void edit::on_outFileAvtobaza_clicked()
{
    // Загрузка из файла avtobaza.txt
    QFile file("avtobaza.txt");
    QSqlQuery query;
    if (file.open(QIODevice::ReadOnly)) {
        QTextStream outF(&file);
        QList<QString>list;
        while (!outF.atEnd()) {
            QString str = outF.readLine();
            list = str.split(";");
            if (db1.open()) {
                query.prepare("INSERT INTO avtobaza (ID_AVTOBAZA, NUMBER, ADDRESS) VALUES (:ID_AVTOBAZA, :NUMBER, :ADDRESS);");
                query.bindValue(":ID_AVTOBAZA", list[0]);
                query.bindValue(":NUMBER", list[1]);
                query.bindValue(":ADDRESS", list[2]);
            }
        }
        file.close();
        if (!query.exec())
            QMessageBox::warning(this, "Внимание!","Не удалось загрузить данные из файла!");
        else
            QMessageBox::about(this, "Успех!","Данные успешно загружены из файла 'avtobaza.txt'");
    }
}

