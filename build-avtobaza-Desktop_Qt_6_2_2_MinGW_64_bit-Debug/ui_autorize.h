/********************************************************************************
** Form generated from reading UI file 'autorize.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTORIZE_H
#define UI_AUTORIZE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_autorize
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *LE_Login;
    QLabel *label_2;
    QLineEdit *LE_Password;
    QCheckBox *Check_Admin;
    QCheckBox *Check_Director;
    QCheckBox *Check_Remember;
    QPushButton *registration;
    QPushButton *exit;

    void setupUi(QDialog *autorize)
    {
        if (autorize->objectName().isEmpty())
            autorize->setObjectName(QString::fromUtf8("autorize"));
        autorize->resize(302, 197);
        widget = new QWidget(autorize);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 13, 281, 176));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        LE_Login = new QLineEdit(widget);
        LE_Login->setObjectName(QString::fromUtf8("LE_Login"));

        gridLayout->addWidget(LE_Login, 0, 1, 1, 2);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        LE_Password = new QLineEdit(widget);
        LE_Password->setObjectName(QString::fromUtf8("LE_Password"));
        LE_Password->setEchoMode(QLineEdit::Normal);

        gridLayout->addWidget(LE_Password, 1, 1, 1, 2);

        Check_Admin = new QCheckBox(widget);
        Check_Admin->setObjectName(QString::fromUtf8("Check_Admin"));

        gridLayout->addWidget(Check_Admin, 2, 0, 1, 2);

        Check_Director = new QCheckBox(widget);
        Check_Director->setObjectName(QString::fromUtf8("Check_Director"));

        gridLayout->addWidget(Check_Director, 3, 0, 1, 2);

        Check_Remember = new QCheckBox(widget);
        Check_Remember->setObjectName(QString::fromUtf8("Check_Remember"));

        gridLayout->addWidget(Check_Remember, 4, 0, 1, 2);

        registration = new QPushButton(widget);
        registration->setObjectName(QString::fromUtf8("registration"));

        gridLayout->addWidget(registration, 5, 0, 1, 2);

        exit = new QPushButton(widget);
        exit->setObjectName(QString::fromUtf8("exit"));

        gridLayout->addWidget(exit, 5, 2, 1, 1);


        retranslateUi(autorize);

        QMetaObject::connectSlotsByName(autorize);
    } // setupUi

    void retranslateUi(QDialog *autorize)
    {
        autorize->setWindowTitle(QCoreApplication::translate("autorize", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("autorize", "\320\233\320\276\320\263\320\270\320\275:", nullptr));
        label_2->setText(QCoreApplication::translate("autorize", "\320\237\320\260\321\200\320\276\320\273\321\214:", nullptr));
        Check_Admin->setText(QCoreApplication::translate("autorize", "\320\220\320\264\320\274\320\270\320\275\320\270\321\201\321\202\321\200\320\260\321\202\320\276\321\200", nullptr));
        Check_Director->setText(QCoreApplication::translate("autorize", "\320\224\320\270\321\200\320\265\320\272\321\202\320\276\321\200", nullptr));
        Check_Remember->setText(QCoreApplication::translate("autorize", "\320\227\320\260\320\277\320\276\320\274\320\275\320\270\321\202\321\214 \320\274\320\265\320\275\321\217", nullptr));
        registration->setText(QCoreApplication::translate("autorize", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
        exit->setText(QCoreApplication::translate("autorize", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class autorize: public Ui_autorize {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTORIZE_H
