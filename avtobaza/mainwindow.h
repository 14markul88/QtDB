#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include "autorize.h"
#include "edit.h"
#include "look.h"
#include "director.h"



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_autorize_clicked();

    void on_entry_clicked();

private:
    Ui::MainWindow *ui;
    autorize* autorize1;
    look* look1;
    edit* edit1;
    director* director1;
    QSqlDatabase db;

public slots:
    void slotremember(QString login, QString password);

};
#endif // MAINWINDOW_H
