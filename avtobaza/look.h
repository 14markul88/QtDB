#ifndef LOOK_H
#define LOOK_H

#include <QDialog>
#include <QSqlDatabase>
#include <map>

namespace Ui {
class look;
}

class look : public QDialog
{
    Q_OBJECT

public:
    explicit look(QSqlDatabase &db1, QWidget *parent = nullptr);
    ~look();

private slots:

    void view(QString table);

    void inFile(QString table);

    void print(QString th, QString table);

    void sort(QString table, QString field);

    void on_viewAvto_clicked();

    void on_viewAZS_clicked();

    void on_viewAvtobaza_clicked();

    void on_inFileAvtobaza_clicked();

    void on_inFileAvto_clicked();

    void on_inFileAZS_clicked();

    void on_printAvto_clicked();

    void on_printAZS_clicked();

    void on_printAvtobaza_clicked();

    void on_sortAvto_clicked();

    void on_sortAZS_clicked();

    void on_sortAvtobaza_clicked();

private:
    Ui::look *ui;
    QSqlDatabase& db1;

        std::map<QString, QString> avto = {{"ID автомобиля","ID_avto"}, {"ID автобазы","FK_ID_avtobaza"}, {"Сорт бензина","sort_benz"},{"Модель","model"},{"Марка","marka"},{"Тип","type"},{"Гос. номер","gos_nomer"}};
        std::map<QString, QString> AZS = {{"ID АЗС","ID_AZS"}, {"Название","name"}, {"Адрес","address"},{"Сорт бензина","sort_benz"},{"Состояние","condition"}};
        std::map<QString, QString> avtobaza = {{"ID автобазы","ID_avtobaza"}, {"Номер","number"}, {"Адрес","address"}};
};

#endif // LOOK_H
