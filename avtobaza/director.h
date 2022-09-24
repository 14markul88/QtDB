#ifndef DIRECTOR_H
#define DIRECTOR_H

#include <QDialog>
#include <QSqlDatabase>
#include <QMessageBox>

namespace Ui {
class director;
}

class director : public QDialog
{
    Q_OBJECT

public:
    explicit director(QSqlDatabase &db1, QWidget *parent = nullptr);
    ~director();

private slots:
    void on_certainAvto_clicked();

    void on_sedanDTcount_clicked();

    void on_sortAbsense_clicked();

    void on_maxAvtoAZSCount_clicked();

    void on_certainSortBenz_clicked();

    void on_maxAvtoCount_clicked();

private:
    Ui::director *ui;
    QSqlDatabase& db1;
};

#endif // DIRECTOR_H
