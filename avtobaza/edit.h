#ifndef EDIT_H
#define EDIT_H

#include <QDialog>
#include <QSqlDatabase>

namespace Ui {
class edit;
}

class edit : public QDialog
{
    Q_OBJECT

public:
    explicit edit(QSqlDatabase &db1, QWidget *parent = nullptr);
    ~edit();

private slots:
    void on_insertAvto_clicked();

    void on_insertAZS_clicked();

    void on_insertAvtobaza_clicked();

    void del(QString table, QString field, QString value);

    void on_changeAvto_clicked();

    void on_changeAZS_clicked();

    void on_changeAvtobaza_clicked();

    void on_delAvto_clicked();

    void on_delAZS_clicked();

    void on_delAvtobaza_clicked();

    void on_outFileAvto_clicked();

    void on_outFileAZS_clicked();

    void on_outFileAvtobaza_clicked();

private:
    Ui::edit *ui;
    QSqlDatabase& db1;
};

#endif // EDIT_H
