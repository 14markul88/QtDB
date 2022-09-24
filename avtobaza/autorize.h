#ifndef AUTORIZE_H
#define AUTORIZE_H

#include <QDialog>
#include <QSqlDatabase>

namespace Ui {
class autorize;
}

class autorize : public QDialog
{
    Q_OBJECT

public:
    explicit autorize(QSqlDatabase &db1, QWidget *parent = nullptr);
    ~autorize();

private slots:
    void on_registration_clicked();

    void on_exit_clicked();

private:
    Ui::autorize *ui;
    QSqlDatabase& db1;   

signals:
    void signalremember(QString, QString);
};

#endif // AUTORIZE_H
