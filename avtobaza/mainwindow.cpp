/*
mainwindow - форма "Вход в программу"
Краткое описание:
    На данной форме заказчик имеет возможность создать новый аккаунт или войти в программу под уже существующими регистрационными данными.
--------------------------------------------------------------------------------
Переменная, используемая в форме:
    db - объект базы данных.
--------------------------------------------------------------------------------
Функции, используемые в форме:
    on_autorize_clicked - перенаправление заказчика на форму авторизации;
    slotremember - автозаполнение логина и пароля при выборе "Запомнить меня" на форме авторизации;
    on_entry_clicked - вход в программу.
*/
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QSqlQuery>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Автобаза");
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("avtobaza.db");
}


MainWindow::~MainWindow()
{
    delete ui;
}


/*
on_autorize_clicked - вызов формы autorize.
Локальная переменная:
    autorize1 - объект класса autorize.
Функция:
    connect - принятие логина и пароля с форма авторизации.
*/
void MainWindow::on_autorize_clicked()
{
    // Регистрация нового пользователя
    autorize1 = new autorize(db);
    autorize1->show();
    connect(autorize1, &autorize::signalremember, this, &MainWindow::slotremember);
}


/*
on_entry_clicked - вызов формы look\edit.
Локальные переменные:
    look1 - объект класса look;
    edit1 - объект класса edit;
    password - пароль пользователя;
    login - логин пользователя;
    admin - флаг для проверки существования логина и пароля админа;
    user - флаг для проверки существования логина и пароля пользователя;
    director - флаг для проверки существования логина и пароля директора;
    db - объект базы данных;
    query - запрос к базе данных.
*/
void MainWindow::on_entry_clicked()
{
    // Вход в аккаунт
    if (db.open()) {

        QString login = ui->LE_Login->text();
        QString password = ui->LE_Password->text();
        QSqlQuery query("SELECT * FROM users;");
        bool isAdmin = false, isUser = false, isDirector = false;

        // Вход как администратор/пользователь, если логин и пароль существуют
        while (query.next()) {
            if ((login == query.value(0).toString()) && (password == query.value(1).toString()) && (query.value(2).toString() == "admin")) {
                isAdmin = true;
            } else if ((login == query.value(0).toString()) && (password == query.value(1).toString()) && (query.value(2).toString() == "user")) {
                isUser = true;
            } else if ((login == query.value(0).toString()) && (password == query.value(1).toString()) && (query.value(2).toString() == "director")) {
                isDirector = true;
            }
        }

        // Отображение формы "Просмотр данных"
        if (isUser) {
            look1= new look(db);
            look1->show();
        // Отображение формы "Редактирование данных"
        } else if (isAdmin) {
            edit1= new edit(db);
            edit1->show();
        // Отображение формы "Специализированный доступ"
        }  else if (isDirector) {
            director1= new director(db);
            director1->show();
        } else {
            QMessageBox::warning(this, "Внимание!","Неверный логин или пароль! \
                                \nПопробуйте еще раз.");
            ui->LE_Login->clear();
            ui->LE_Password->clear();
            QMessageBox(this).close();
        }
    }

    // Очистка полей логин/пароль после входа
    ui->LE_Password->clear();
    ui->LE_Login->clear();
}


/*
slotremember - автозаполнение логина и пароля при выборе "Запомнить меня" на форме авторизации.
Формальные параметры:
    login - передаваемый с формы логин;
    password - передаваемый с формы пароль.
*/
void MainWindow::slotremember(QString login, QString password)
{
    // Присвоение логина и пароля с формы авторизации для кнопки "Запомнить меня"
    ui->LE_Login->setText(login);
    ui->LE_Password->setText(password);
}
