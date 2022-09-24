/*
look - пользовательсая панель.
Краткое описание:
    Данная форма позволяет осуществить взаимодействие с данными в базе данных: выполнить просмотр, сортировку по параметру, выбранному из выпадающего списка, вывести данные на печать или выгрузить их в текстовый документ формата ".txt".
--------------------------------------------------------------------------------
Функции, используемые в форме:
    table_view - просмотр данных из таблицы;
    on_viewAvto_clicked - просмотр данных из таблицы "Автомобиль";
    on_viewAZS_clicked - просмотр данных из таблицы "АЗС";
    on_viewAvtobaza_clicked - просмотр данных из таблицы "Автобаза";
    upload - загрузка данных из таблицы в файл;
    on_inFileAvto_clicked - загрузка данных из таблицы "Автомобиль" в файл "avto.txt";
    on_inFileAZS_clicked - загрузка данных из таблицы "Автомобиль" в файл "AZS.txt";
    on_inFileAvtobaza_clicked - загрузка данных из таблицы "Автомобиль" в файл "avtobaza.txt";
    printTables - вывод данных из таблицы на печать;
    on_printAvto_clicked - вывод на печать таблицы "Автомобиль";
    on_printAZS_clicked - вывод на печать таблицы "АЗС";
    on_printAvtobaza_clicked - вывод на печать таблицы "Автобаза";
    sort - сортировка данных в таблицах;
    on_sortAvto_clicked - сортировка данных в таблице "Автомобиль";
    on_sortAZS_clicked - сортировка данных в таблице "АЗС";
    on_sortAvtobaza_clicked - сортировка данных в таблице "Автобаза".
*/

#include "look.h"
#include "ui_look.h"
#include <QPrinter>
#include <QPrintDialog>
#include <QSqlQuery>
#include <QFile>
#include <QMessageBox>
#include <QSqlRecord>

look::look(QSqlDatabase &db, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::look),
    db1(db)
{
    ui->setupUi(this);
    this->setWindowTitle("Пользователь");
}

look::~look()
{
    delete ui;
}


//--------------------------ФУНКЦИЯ_ПРОСМОТРА-------------------------//

/*
table_view - просмотр данных из таблицы.
Формальный параметр:
    table - название таблицы.
Локальные переменные:
    query - запрос к базе данных;
    i - индекс для итерирования по столбцам таблиц;
    index - индекс для итерирования по рядам таблиц.
*/
void look::view(QString table)
{
    // Очистка таблицы перед заполнением данными
    ui->tableWidget->clear();
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(0);

    if (db1.open()) {
        QSqlQuery query("SELECT * FROM " + table);

        // Установка заголовков таблицы
        ui->tableWidget->setShowGrid(true);
        ui->tableWidget->setRowCount(query.size());
        int index = 0;
        ui->tableWidget->setColumnCount(query.record().count());
        ui->tableWidget->verticalHeader()->setVisible(false);
        ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

        while(query.next())
        {
            ui->tableWidget->insertRow(index);
            for (int i = 0; i < query.record().count(); i++)
                ui->tableWidget->setItem(index, i, new QTableWidgetItem(query.value(i).toString()));
            index++;
        }
    }
}


//--------------------------КНОПКИ_ПРОСМОТРА--------------------------//

/*
on_viewAvto_clicked - просмотр данных из таблицы "Автомобиль".
Функция:
    view - просмотр данных из таблицы.
*/
void look::on_viewAvto_clicked()
{
    // Просмотр данных из таблицы "Автомобиль"
    view("avto");
    ui->tableWidget->setHorizontalHeaderLabels(QStringList() = {"ID автомобиля", "ID автобазы", "Сорт бензина", "Модель", "Марка", "Тип", "Гос. номер"});
}


/*
on_viewAZS_clicked - просмотр данных из таблицы "АЗС".
Функция:
    view - просмотр данных из таблицы.
*/
void look::on_viewAZS_clicked()
{
    // Просмотр данных из таблицы "Автомобиль"
    view("AZS");
    ui->tableWidget->setHorizontalHeaderLabels(QStringList() = {"ID АЗС", "Название", "Адрес", "Сорт бензина", "Состояние"});
}


/*
on_viewAvtobaza_clicked - просмотр данных из таблицы "Автобаза".
Функция:
    view - просмотр данных из таблицы.
*/
void look::on_viewAvtobaza_clicked()
{
    // Просмотр данных из таблицы "Автобаза"
    view("avtobaza");
    ui->tableWidget->setHorizontalHeaderLabels(QStringList() = {"ID автобазы", "Номер", "Адрес"});
}


//--------------------------ФУНКЦИЯ_ВЫГРУЗКИ_В_ФАЙЛ--------------------------//

/*
upload - загрузка данных из таблицы в файл.
Формальный параметр:
    table - название таблицы.
Локальные переменные:
    file - файл, записывающий данные из таблицы;
    query - запрос к базе данных.
*/
void look::inFile(QString table)
{
    if (db1.open()) {
        QSqlQuery query("SELECT * FROM " + table);
        QFile file(table + ".txt");
        if (file.open(QIODevice::WriteOnly)) {
            QTextStream inF(&file);
            while (query.next()) {
                for (int i = 0; i < query.record().count(); i++) {
                    inF << query.value(i).toByteArray() << "; ";
                }
                inF << "\n";
            }
            if (!query.exec())
                QMessageBox::warning(this,"Внимание!", "Не удалось записать в файл!");
             else
               QMessageBox::about(this,"Успех!", "Таблица записана в файл '" + table + ".txt'");
            file.close();
        }
        db1.close();
    }
}


//--------------------------КНОПКИ_ВЫГРУЗКИ_В_ФАЙЛ--------------------------//

/*
on_inFileAvto_clicked - загрузка данных из таблицы "Автомобиль" в файл "avto.txt".
Функция:
    inFile - загрузка данных из таблицы в файл.
*/
void look::on_inFileAvto_clicked()
{
    // Выгрузка в файл avto.txt
    inFile("avto");
}

/*
on_inFileAZS_clicked - загрузка данных из таблицы "Автомобиль" в файл "AZS.txt".
Функция:
    inFile - загрузка данных из таблицы в файл.
*/
void look::on_inFileAZS_clicked()
{
    // Выгрузка в файл AZS.txt
    inFile("AZS");
}


/*
on_inFileAvtobaza_clicked - загрузка данных из таблицы "Автомобиль" в файл "avtobaza.txt".
Функция:
    inFile - загрузка данных из таблицы в файл.
*/
void look::on_inFileAvtobaza_clicked()
{
    // Выгрузка в файл avtobaza.txt
    inFile("avtobaza");
}


//--------------------------ФУНКЦИЯ_ВЫВОДА_НА_ПЕЧАТЬ--------------------------//

/*
print - вывод данных из таблицы на печать.
Формальные параметры:
    th - заголовки таблицы;
    table - название таблицы.
Локальные переменные:
    pr - объект класса принтера;
    dlg - объект класса диалога принтера;
    query - запрос к базе данных;
    doc - текстовый документ;
    html - строка с HTML-запросом.
*/
void look::print(QString th, QString table)
{
    // Создание объекта принтера
    QPrinter* pr = new QPrinter();
    QPrintDialog dlg(pr, this);
    QSqlQuery query("SELECT * FROM " + table);

    // Создание html разметки на странице для печати
    QString html =  "<table border = '1'>"
                        "<tbody>"
                             "<tr>"
                                "" + th + ""
                             "</tr>";
    while (query.next()) {
        html += "<tr>";
        for (int i = 0; i < query.record().count(); i++) {
            html += "<td>" + query.value(i).toString() + "</td>";
        }
        html += "</tr> \n";
    }
    html += "\n </table>";
    if (dlg.exec() == QDialog::Accepted) {

        // Создание текстового документа
        QTextDocument doc;

        // Запись информации в документ
        doc.setHtml(html);

        // Печать документа
        doc.print(pr);
        delete pr;
    }
}


//--------------------------КНОПКИ_ВЫВОДА_НА_ПЕЧАТЬ-------------------------//

/*
on_printAvto_clicked - вывод на печать таблицы "Автомобиль".
Локальная переменная:
    str - строка, хранящая заголовки таблицы.
Функция:
    print - вывод данных из таблицы на печать.
*/
void look::on_printAvto_clicked()
{
    // Вывод таблицы "Автомобиль" на печать
    QString str =
                  "<th>" "ID автомобиля" "</th>"
                  "<th>" "ID автобазы" "</th>"
                  "<th>" "Сорт бензина" "</th>"
                  "<th>" "Модель" "</th>"
                  "<th>" "Марка" "</th>"
                  "<th>" "Тип" "</th>"
                  "<th>" "Гос. номер" "</th>";
    print(str, "avto");
}

/*
on_printAZS_clicked - вывод на печать таблицы "АЗС".
Локальная переменная:
    str - строка, хранящая заголовки таблицы.
Функция:
    print - вывод данных из таблицы на печать.
*/
void look::on_printAZS_clicked()
{
    // Вывод таблицы "АЗС" на печать
    QString str =
                  "<th>" "ID АЗС" "</th>"
                  "<th>" "Название" "</th>"
                  "<th>" "Адрес" "</th>"
                  "<th>" "Сорт бензина" "</th>"
                  "<th>" "Состояние" "</th>";
    print(str, "AZS");
}

/*
on_printAvtobaza_clicked - вывод на печать таблицы "Автобаза".
Локальная переменная:
    str - строка, хранящая заголовки таблицы.
Функция:
    print - вывод данных из таблицы на печать.
*/
void look::on_printAvtobaza_clicked()
{
    // Вывод таблицы "Автобаза" на печать
    QString str =
                  "<th>" "ID автобазы" "</th>"
                  "<th>" "Номер" "</th>"
                  "<th>" "Адрес" "</th>";
    print(str, "avtobaza");
}


//--------------------------ФУНКЦИЯ_СОРТИРОВКИ-------------------------//

/*
sort - сортировка данных в таблицах.
Формальные параметры:
    table - название таблицы;
    filed - названия поля.
Локальные переменные:
    query - запрос к базе данных;
    i - индекс для прохода по столбцам таблицы;
    index - индекс для итерирования по рядам таблицы.
*/
void look::sort(QString table, QString filed)
{
    QSqlQuery query ("SELECT * FROM " + table + " ORDER BY " + filed);
    ui->tableWidget->clear();
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(0);
    ui->tableWidget->setShowGrid(true);
    ui->tableWidget->setRowCount(query.size());
    ui->tableWidget->setColumnCount(query.record().count());
    ui->tableWidget->verticalHeader()->setVisible(false);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    int index = 0;
    while(query.next()) {
        ui->tableWidget->insertRow(index);
        for (int i = 0; i < query.record().count(); i++)
            ui->tableWidget->setItem(index, i, new QTableWidgetItem(query.value(i).toString()));
        index++;
    }
}


//--------------------------КНОПКИ_СОРТИРОВКИ--------------------------//

/*
on_sortAvto_clicked - сортировка данных в таблице "Автомобиль".
Локальная переменная:
    field - поле, полученное из выпадающего списка;
    avto[field] - значение, полученное по ключу из словаря.
Функция:
    sort - сортировка данных в таблицах.
*/
void look::on_sortAvto_clicked()
{
    // Сортировка таблицы "Автомобиль"
    QString field = ui->CB_Avto_Columns->currentText();
    sort("avto", avto[field]);
    ui->tableWidget->setHorizontalHeaderLabels(QStringList() = {"ID автомобиля", "ID автобазы", "Сорт бензина", "Модель", "Марка", "Тип", "Гос. номер"});
}

/*
on_sortAZS_clicked - сортировка данных в таблице "АЗС".
Локальная переменная:
    field - поле, полученное из выпадающего списка;
    avto[field] - значение, полученное по ключу из словаря.
Функция:
    sort - сортировка данных в таблицах.
*/
void look::on_sortAZS_clicked()
{
    // Сортировка таблицы "АЗС"
    QString field = ui->CB_AZS_Columns->currentText();
    sort("AZS", AZS[field]);
    ui->tableWidget->setHorizontalHeaderLabels(QStringList() = {"ID АЗС", "Название", "Адрес", "Сорт бензина", "Состояние"});
}

/*
on_sortAvtobaza_clicked - сортировка данных в таблице "Автобаза".
Локальная переменная:
    field - поле, полученное из выпадающего списка;
    avtobaza[field] - значение, полученное по ключу из словаря.
Функция:
    sort - сортировка данных в таблицах.
*/
void look::on_sortAvtobaza_clicked()
{
    // Сортировка таблицы "Автобаза"
    QString field = ui->CB_Avtobaza_Columns->currentText();
    sort("Avtobaza", avtobaza[field]);
    ui->tableWidget->setHorizontalHeaderLabels(QStringList() = {"ID автобазы", "Номер", "Адрес"});
}

