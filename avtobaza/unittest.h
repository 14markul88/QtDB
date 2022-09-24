/*
unittest - модульные тесты для проверки логина и пароля.
*/
#ifndef UNITTEST_H
#define UNITTEST_H
#include <QRegularExpression>

/*
class checkPassword{}; - тестовый класс, для проверки пароля регулярным выражением.
Формальный параметр:
    value - проверяемый пароль.
Локальные переменные:
    password - регулярное выражение для проверки пароля;
    match - переменная, хранящая результаты поиска совпадений с регулярным выражением.
Функция:
    check - метод, проверяющий пароль регулярным выражением.
*/
class checkPassword {
public:
    bool check(QString value) {
        QRegularExpression password ("^(?=.*\\d)(?=.*[A-Z])(?=.*[a-z])[^*&{}|+()!@#%]{4,16}$");
        auto match = password.match(value);
        if (!match.hasMatch())
            return false;
        return true;
    }
};


/*
class checkLogin{}; - тестовый класс, для проверки логина регулярным выражением.
Формальный параметр:
    value - проверяемый логин.
Локальные переменные:
    login - регулярное выражение для проверки логина;
    match - переменная, хранящая результаты поиска совпадений с регулярным выражением.
Функция:
    check - метод, проверяющий логин регулярным выражением.
*/
class checkLogin {
public:
    bool check(QString value) {
        QRegularExpression login ("^(?=.*[a-zA-Z]{1,})(?=.*[\\d]{1,})[a-zA-Z0-9]{1,10}$");
        auto match = login.match(value);
        if (!match.hasMatch())
            return false;
        return true;
    }
};

#endif // UNITTEST_H
