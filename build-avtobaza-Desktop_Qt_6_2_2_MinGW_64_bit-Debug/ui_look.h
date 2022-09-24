/********************************************************************************
** Form generated from reading UI file 'look.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOOK_H
#define UI_LOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_look
{
public:
    QTableWidget *tableWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *viewAvto;
    QPushButton *inFileAvto;
    QPushButton *sortAvto;
    QPushButton *printAvto;
    QLabel *label;
    QComboBox *CB_Avto_Columns;
    QWidget *tab_2;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QPushButton *viewAZS;
    QPushButton *inFileAZS;
    QPushButton *sortAZS;
    QPushButton *printAZS;
    QLabel *label_2;
    QComboBox *CB_AZS_Columns;
    QWidget *tab_3;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_3;
    QPushButton *viewAvtobaza;
    QPushButton *inFileAvtobaza;
    QPushButton *sortAvtobaza;
    QPushButton *printAvtobaza;
    QLabel *label_3;
    QComboBox *CB_Avtobaza_Columns;

    void setupUi(QDialog *look)
    {
        if (look->objectName().isEmpty())
            look->setObjectName(QString::fromUtf8("look"));
        look->resize(971, 532);
        tableWidget = new QTableWidget(look);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 10, 951, 321));
        tabWidget = new QTabWidget(look);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 340, 281, 181));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 281, 151));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 30, 256, 113));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        viewAvto = new QPushButton(widget);
        viewAvto->setObjectName(QString::fromUtf8("viewAvto"));

        gridLayout->addWidget(viewAvto, 0, 0, 1, 1);

        inFileAvto = new QPushButton(widget);
        inFileAvto->setObjectName(QString::fromUtf8("inFileAvto"));

        gridLayout->addWidget(inFileAvto, 0, 1, 1, 1);

        sortAvto = new QPushButton(widget);
        sortAvto->setObjectName(QString::fromUtf8("sortAvto"));

        gridLayout->addWidget(sortAvto, 1, 0, 1, 1);

        printAvto = new QPushButton(widget);
        printAvto->setObjectName(QString::fromUtf8("printAvto"));

        gridLayout->addWidget(printAvto, 1, 1, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 2);

        CB_Avto_Columns = new QComboBox(widget);
        CB_Avto_Columns->addItem(QString());
        CB_Avto_Columns->addItem(QString());
        CB_Avto_Columns->addItem(QString());
        CB_Avto_Columns->addItem(QString());
        CB_Avto_Columns->addItem(QString());
        CB_Avto_Columns->addItem(QString());
        CB_Avto_Columns->addItem(QString());
        CB_Avto_Columns->setObjectName(QString::fromUtf8("CB_Avto_Columns"));

        gridLayout->addWidget(CB_Avto_Columns, 3, 0, 1, 2);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 0, 281, 151));
        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 256, 113));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        viewAZS = new QPushButton(layoutWidget);
        viewAZS->setObjectName(QString::fromUtf8("viewAZS"));

        gridLayout_2->addWidget(viewAZS, 0, 0, 1, 1);

        inFileAZS = new QPushButton(layoutWidget);
        inFileAZS->setObjectName(QString::fromUtf8("inFileAZS"));

        gridLayout_2->addWidget(inFileAZS, 0, 1, 1, 1);

        sortAZS = new QPushButton(layoutWidget);
        sortAZS->setObjectName(QString::fromUtf8("sortAZS"));

        gridLayout_2->addWidget(sortAZS, 1, 0, 1, 1);

        printAZS = new QPushButton(layoutWidget);
        printAZS->setObjectName(QString::fromUtf8("printAZS"));

        gridLayout_2->addWidget(printAZS, 1, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 2, 0, 1, 2);

        CB_AZS_Columns = new QComboBox(layoutWidget);
        CB_AZS_Columns->addItem(QString());
        CB_AZS_Columns->addItem(QString());
        CB_AZS_Columns->addItem(QString());
        CB_AZS_Columns->addItem(QString());
        CB_AZS_Columns->addItem(QString());
        CB_AZS_Columns->setObjectName(QString::fromUtf8("CB_AZS_Columns"));

        gridLayout_2->addWidget(CB_AZS_Columns, 3, 0, 1, 2);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        groupBox_3 = new QGroupBox(tab_3);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(0, 0, 281, 151));
        layoutWidget_2 = new QWidget(groupBox_3);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 30, 256, 113));
        gridLayout_3 = new QGridLayout(layoutWidget_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        viewAvtobaza = new QPushButton(layoutWidget_2);
        viewAvtobaza->setObjectName(QString::fromUtf8("viewAvtobaza"));

        gridLayout_3->addWidget(viewAvtobaza, 0, 0, 1, 1);

        inFileAvtobaza = new QPushButton(layoutWidget_2);
        inFileAvtobaza->setObjectName(QString::fromUtf8("inFileAvtobaza"));

        gridLayout_3->addWidget(inFileAvtobaza, 0, 1, 1, 1);

        sortAvtobaza = new QPushButton(layoutWidget_2);
        sortAvtobaza->setObjectName(QString::fromUtf8("sortAvtobaza"));

        gridLayout_3->addWidget(sortAvtobaza, 1, 0, 1, 1);

        printAvtobaza = new QPushButton(layoutWidget_2);
        printAvtobaza->setObjectName(QString::fromUtf8("printAvtobaza"));

        gridLayout_3->addWidget(printAvtobaza, 1, 1, 1, 1);

        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 2, 0, 1, 2);

        CB_Avtobaza_Columns = new QComboBox(layoutWidget_2);
        CB_Avtobaza_Columns->addItem(QString());
        CB_Avtobaza_Columns->addItem(QString());
        CB_Avtobaza_Columns->addItem(QString());
        CB_Avtobaza_Columns->setObjectName(QString::fromUtf8("CB_Avtobaza_Columns"));

        gridLayout_3->addWidget(CB_Avtobaza_Columns, 3, 0, 1, 2);

        tabWidget->addTab(tab_3, QString());

        retranslateUi(look);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(look);
    } // setupUi

    void retranslateUi(QDialog *look)
    {
        look->setWindowTitle(QCoreApplication::translate("look", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("look", "\320\237\320\260\320\275\320\265\320\273\321\214 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        viewAvto->setText(QCoreApplication::translate("look", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214", nullptr));
        inFileAvto->setText(QCoreApplication::translate("look", "\320\222\321\213\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\262 \321\204\320\260\320\271\320\273", nullptr));
        sortAvto->setText(QCoreApplication::translate("look", "\320\236\321\202\321\201\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        printAvto->setText(QCoreApplication::translate("look", "\320\222\321\213\320\262\320\265\321\201\321\202\320\270 \320\275\320\260 \320\277\320\265\321\207\320\260\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("look", "\320\232\321\200\320\270\321\202\320\265\321\200\320\270\320\271 \321\201\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\320\270", nullptr));
        CB_Avto_Columns->setItemText(0, QCoreApplication::translate("look", "ID \320\260\320\262\321\202\320\276\320\274\320\276\320\261\320\270\320\273\321\217", nullptr));
        CB_Avto_Columns->setItemText(1, QCoreApplication::translate("look", "ID \320\260\320\262\321\202\320\276\320\261\320\260\320\267\321\213", nullptr));
        CB_Avto_Columns->setItemText(2, QCoreApplication::translate("look", "\320\241\320\276\321\200\321\202 \320\261\320\265\320\275\320\267\320\270\320\275\320\260", nullptr));
        CB_Avto_Columns->setItemText(3, QCoreApplication::translate("look", "\320\234\320\276\320\264\320\265\320\273\321\214", nullptr));
        CB_Avto_Columns->setItemText(4, QCoreApplication::translate("look", "\320\234\320\260\321\200\320\272\320\260", nullptr));
        CB_Avto_Columns->setItemText(5, QCoreApplication::translate("look", "\320\242\320\270\320\277", nullptr));
        CB_Avto_Columns->setItemText(6, QCoreApplication::translate("look", "\320\223\320\276\321\201. \320\275\320\276\320\274\320\265\321\200", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("look", "\320\220\320\262\321\202\320\276\320\274\320\276\320\261\320\270\320\273\321\214", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("look", "\320\237\320\260\320\275\320\265\320\273\321\214 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        viewAZS->setText(QCoreApplication::translate("look", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214", nullptr));
        inFileAZS->setText(QCoreApplication::translate("look", "\320\222\321\213\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\262 \321\204\320\260\320\271\320\273", nullptr));
        sortAZS->setText(QCoreApplication::translate("look", "\320\236\321\202\321\201\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        printAZS->setText(QCoreApplication::translate("look", "\320\222\321\213\320\262\320\265\321\201\321\202\320\270 \320\275\320\260 \320\277\320\265\321\207\320\260\321\202\321\214", nullptr));
        label_2->setText(QCoreApplication::translate("look", "\320\232\321\200\320\270\321\202\320\265\321\200\320\270\320\271 \321\201\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\320\270", nullptr));
        CB_AZS_Columns->setItemText(0, QCoreApplication::translate("look", "ID \320\220\320\227\320\241", nullptr));
        CB_AZS_Columns->setItemText(1, QCoreApplication::translate("look", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        CB_AZS_Columns->setItemText(2, QCoreApplication::translate("look", "\320\220\320\264\321\200\320\265\321\201", nullptr));
        CB_AZS_Columns->setItemText(3, QCoreApplication::translate("look", "\320\241\320\276\321\200\321\202 \320\261\320\265\320\275\320\267\320\270\320\275\320\260", nullptr));
        CB_AZS_Columns->setItemText(4, QCoreApplication::translate("look", "\320\241\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("look", "\320\220\320\227\320\241", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("look", "\320\237\320\260\320\275\320\265\320\273\321\214 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        viewAvtobaza->setText(QCoreApplication::translate("look", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214", nullptr));
        inFileAvtobaza->setText(QCoreApplication::translate("look", "\320\222\321\213\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\262 \321\204\320\260\320\271\320\273", nullptr));
        sortAvtobaza->setText(QCoreApplication::translate("look", "\320\236\321\202\321\201\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        printAvtobaza->setText(QCoreApplication::translate("look", "\320\222\321\213\320\262\320\265\321\201\321\202\320\270 \320\275\320\260 \320\277\320\265\321\207\320\260\321\202\321\214", nullptr));
        label_3->setText(QCoreApplication::translate("look", "\320\232\321\200\320\270\321\202\320\265\321\200\320\270\320\271 \321\201\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\320\270", nullptr));
        CB_Avtobaza_Columns->setItemText(0, QCoreApplication::translate("look", "ID \320\260\320\262\321\202\320\276\320\261\320\260\320\267\321\213", nullptr));
        CB_Avtobaza_Columns->setItemText(1, QCoreApplication::translate("look", "\320\235\320\276\320\274\320\265\321\200", nullptr));
        CB_Avtobaza_Columns->setItemText(2, QCoreApplication::translate("look", "\320\220\320\264\321\200\320\265\321\201", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("look", "\320\220\320\262\321\202\320\276\320\261\320\260\320\267\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class look: public Ui_look {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOOK_H
