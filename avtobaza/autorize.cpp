/*
autorize - форма "Авторизация"
Краткое описание:
    На данной форме заказчик имеет возможность создать новый аккаунт от лица администратора в целях редактирования данных в базе данных или обычного пользователя в целях просмотра данных, а также выполнения специализированных запросов к базе данных. Заказчик имеет возможность выбрать опцию "Запомнить меня", в целях автозаполнения полей логин/пароль на главной форме.
    Успешно пройдя авторизацию, данные пользователя записываются в базу данных для последующего их использования при получении доступа к программе.
--------------------------------------------------------------------------------
Переменная, используемая в форме:
    db1 - объект базы данных.
--------------------------------------------------------------------------------
Функции, используемые в форме:
    on_registration_clicked - регистрация нового пользователя;
    on_exit_clicked - закрытие окна регистрации.
*/
#include "autorize.h"
#include "ui_autorize.h"
#include <QSqlQuery>
#include <QRegularExpression>
#include <QMessageBox>
#include "unittest.h"

autorize::autorize(QSqlDatabase &db, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::autorize),
    db1(db)
{
    ui->setupUi(this);
    this->setWindowTitle("Авторизация");
}

autorize::~autorize()
{
    delete ui;
}


/*
on_registration_clicked - регистрация нового пользователя.
Локальные переменные:
    login - логин пользователя;
    password - пароль пользователя;
    flag - флаг для сохранения результатов проверки логина и пароля регулярным выражением;
    db - объект базы данных;
    reglogin - объект тестового класса для логина;
    regpassword - объект тестового класса для пользователя;
    rights - права доступа к системе (администратор/пользователь);
    query - запрос к базе данных.
Функции:
    check - метод тестовых классов.
    isAdmin - выбор варианта создания аккаунта (администратор/пользователь);
    isDirector - выбор варианта создания аккаунта (Директор/пользователь);
    isRemember - выбор варианта отправки логина и пароля на главную форму (да/нет);
    emit - отправка логина и пароля на главную форму.
*/
void autorize::on_registration_clicked()
{
    // Регистрация нового пользователя
    if (db1.open()) {

        bool flag = false;
        checkLogin reglogin;
        checkPassword regpassword;

        QString login = ui->LE_Login->text();
        QString password = ui->LE_Password->text();

        // Проверка логина на уникальность
        QSqlQuery query("SELECT * FROM users;");
        while (query.next()) {
            if ((login == query.value(0).toString())) {
                QMessageBox::warning(this, "Внимание!","Данный логин уже используется! \
                                    \nВведите уникальный логин.");
                QMessageBox(this).close();
                ui->LE_Login->clear();
                flag = true;
            }
        }

        // Проверка логина регулярным выражением
        if (!reglogin.check(login)) {
            QMessageBox::warning(this, "Внимание!","Некорректный логин! \
                                \nЛогин должен: \
                                \n-Содержать минимум 1 прописную или строчную букву; \
                                \n-Содержать минимум 1 цифру; \
                                \n-Находиться в диапазоне от 1 до 10 символов.");
            QMessageBox(this).close();
            ui->LE_Login->clear();
            flag = true;
        }

        // Проверка пароля регулярным выражением
        if (!regpassword.check(password)) {
            QMessageBox::warning(this, "Внимание!","Некорректный пароль! \
                                \nПароль должен: \
                                \n-Содержать минимум 1 прописную букву; \
                                \n-Содержать минимум 1 строчную букву; \
                                \n-Содержать минимум 1 цифру; \
                                \n-Не содержать специальные символы; \
                                \n-Находиться в диапазоне от 4 до 16 символов.");
            QMessageBox(this).close();
            ui->LE_Password->clear();
            flag = true;
        }

        // Проверка галочкек "Администратор" и "Директор"
        bool isAdmin = ui->Check_Admin->isChecked();
        bool isDirector = ui->Check_Director->isChecked();
        QString rights = "user";
        if (isAdmin)
            rights = "admin";
        else if (isDirector)
            rights = "director";

        // В случае если все проверки были успешно пройдены
        if (!flag) {

            // Проверка галочки "Запомнить меня"
            bool isRemember = ui->Check_Remember->isChecked();
            if (isRemember)
                emit(signalremember(login, password));

            QSqlQuery query;
            query.prepare("INSERT INTO users (LOGIN, PASSWORD, RIGHTS) VALUES (:LOGIN, :PASSWORD, :RIGHTS);");
            query.bindValue(":LOGIN", login);
            query.bindValue(":PASSWORD", password);
            query.bindValue(":RIGHTS", rights);
            if (!query.exec())
                QMessageBox::warning(this, "Внимание!","Не удалось зарегистрироваться!");
            else
                QMessageBox::about(this, "Успех!","Аккаунт зарегистрирован");
        }
    }
}


/*
on_exit_clicked - закрытие окна регистрации.
*/
void autorize::on_exit_clicked()
{
    this->close();
}

