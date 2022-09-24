/********************************************************************************
** Form generated from reading UI file 'director.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIRECTOR_H
#define UI_DIRECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_director
{
public:
    QTableWidget *DirectorTable;
    QGroupBox *groupBox_4;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QLabel *label_10;
    QLabel *label_4;
    QLabel *label_12;
    QPushButton *certainAvto;
    QLineEdit *LE_marka_AZS_find;
    QLineEdit *LE_model_AZS_find;
    QPushButton *maxAvtoAZSCount;
    QLabel *label_7;
    QLabel *label;
    QLabel *label_9;
    QPushButton *sedanDTcount;
    QPushButton *certainSortBenz;
    QLineEdit *LE_marka_certain_sort;
    QLabel *label_5;
    QLabel *label_11;
    QLabel *label_8;
    QPushButton *sortAbsense;
    QLineEdit *LE_sortAbsense;
    QPushButton *maxAvtoCount;

    void setupUi(QDialog *director)
    {
        if (director->objectName().isEmpty())
            director->setObjectName(QString::fromUtf8("director"));
        director->resize(794, 502);
        DirectorTable = new QTableWidget(director);
        DirectorTable->setObjectName(QString::fromUtf8("DirectorTable"));
        DirectorTable->setGeometry(QRect(10, 0, 771, 201));
        groupBox_4 = new QGroupBox(director);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 220, 771, 271));
        layoutWidget = new QWidget(groupBox_4);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 747, 229));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 0, 0, 1, 2);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 0, 3, 1, 2);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 1, 1, 1);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 1, 2, 1, 1);

        certainAvto = new QPushButton(layoutWidget);
        certainAvto->setObjectName(QString::fromUtf8("certainAvto"));

        gridLayout->addWidget(certainAvto, 2, 0, 1, 1);

        LE_marka_AZS_find = new QLineEdit(layoutWidget);
        LE_marka_AZS_find->setObjectName(QString::fromUtf8("LE_marka_AZS_find"));

        gridLayout->addWidget(LE_marka_AZS_find, 2, 1, 1, 1);

        LE_model_AZS_find = new QLineEdit(layoutWidget);
        LE_model_AZS_find->setObjectName(QString::fromUtf8("LE_model_AZS_find"));

        gridLayout->addWidget(LE_model_AZS_find, 2, 2, 1, 1);

        maxAvtoAZSCount = new QPushButton(layoutWidget);
        maxAvtoAZSCount->setObjectName(QString::fromUtf8("maxAvtoAZSCount"));

        gridLayout->addWidget(maxAvtoAZSCount, 2, 3, 1, 1);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 3, 0, 1, 3);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 3, 3, 1, 2);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 4, 4, 1, 1);

        sedanDTcount = new QPushButton(layoutWidget);
        sedanDTcount->setObjectName(QString::fromUtf8("sedanDTcount"));

        gridLayout->addWidget(sedanDTcount, 5, 0, 1, 1);

        certainSortBenz = new QPushButton(layoutWidget);
        certainSortBenz->setObjectName(QString::fromUtf8("certainSortBenz"));

        gridLayout->addWidget(certainSortBenz, 5, 3, 1, 1);

        LE_marka_certain_sort = new QLineEdit(layoutWidget);
        LE_marka_certain_sort->setObjectName(QString::fromUtf8("LE_marka_certain_sort"));

        gridLayout->addWidget(LE_marka_certain_sort, 5, 4, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 6, 0, 1, 3);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 6, 3, 1, 2);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 7, 1, 1, 1);

        sortAbsense = new QPushButton(layoutWidget);
        sortAbsense->setObjectName(QString::fromUtf8("sortAbsense"));

        gridLayout->addWidget(sortAbsense, 8, 0, 1, 1);

        LE_sortAbsense = new QLineEdit(layoutWidget);
        LE_sortAbsense->setObjectName(QString::fromUtf8("LE_sortAbsense"));

        gridLayout->addWidget(LE_sortAbsense, 8, 1, 1, 1);

        maxAvtoCount = new QPushButton(layoutWidget);
        maxAvtoCount->setObjectName(QString::fromUtf8("maxAvtoCount"));

        gridLayout->addWidget(maxAvtoCount, 8, 3, 1, 1);


        retranslateUi(director);

        QMetaObject::connectSlotsByName(director);
    } // setupUi

    void retranslateUi(QDialog *director)
    {
        director->setWindowTitle(QCoreApplication::translate("director", "Dialog", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("director", "\320\237\320\260\320\275\320\265\320\273\321\214 \320\264\320\270\321\200\320\265\320\272\321\202\320\276\321\200\320\260", nullptr));
        label_6->setText(QCoreApplication::translate("director", "\320\237\320\276\320\270\321\201\320\272 \320\220\320\227\320\241 \320\264\320\273\321\217 \320\267\320\260\320\277\321\200\320\260\320\262\320\272\320\270 \320\260\320\262\321\202\320\276:", nullptr));
        label_10->setText(QCoreApplication::translate("director", "\320\220\320\227\320\241, \320\276\320\261\321\201\320\273\321\203\320\266\320\270\320\262\320\260\321\216\321\211\320\260\321\217 \320\274\320\260\320\272\321\201\320\270\320\274\320\260\320\273\321\214\320\275\320\276\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\260\320\262\321\202\320\276\320\274\320\276\320\261\320\270\320\273\320\265\320\271:", nullptr));
        label_4->setText(QCoreApplication::translate("director", "\320\234\320\260\321\200\320\272\320\260:", nullptr));
        label_12->setText(QCoreApplication::translate("director", "\320\234\320\276\320\264\320\265\320\273\321\214:", nullptr));
        certainAvto->setText(QCoreApplication::translate("director", "\320\235\320\260\320\271\321\202\320\270", nullptr));
        maxAvtoAZSCount->setText(QCoreApplication::translate("director", "\320\235\320\260\320\271\321\202\320\270", nullptr));
        label_7->setText(QCoreApplication::translate("director", "\320\241\320\272\320\276\320\273\321\214\320\272\320\276 \320\262\320\276\320\264\320\270\321\202\320\265\320\273\320\265\320\271 \"\320\241\320\265\320\264\320\260\320\275\320\276\320\262\" \320\267\320\260\320\277\321\200\320\260\320\262\320\273\321\217\321\216\321\202\321\201\321\217 \"\320\224\320\242\":", nullptr));
        label->setText(QCoreApplication::translate("director", "\320\220\320\262\321\202\320\276\320\274\320\276\320\261\320\270\320\273\320\270, \320\267\320\260\320\277\321\200\320\260\320\262\320\273\321\217\321\216\321\211\320\270\320\265\321\201\321\217 \320\267\320\260\320\264\320\260\320\275\320\275\321\213\320\274 \321\201\320\276\321\200\321\202\320\276\320\274 \320\261\320\265\320\275\320\267\320\270\320\275\320\260:", nullptr));
        label_9->setText(QCoreApplication::translate("director", "\320\241\320\276\321\200\321\202 \320\261\320\265\320\275\320\267\320\270\320\275\320\260:", nullptr));
        sedanDTcount->setText(QCoreApplication::translate("director", "\320\235\320\260\320\271\321\202\320\270", nullptr));
        certainSortBenz->setText(QCoreApplication::translate("director", "\320\235\320\260\320\271\321\202\320\270", nullptr));
        label_5->setText(QCoreApplication::translate("director", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\220\320\227\320\241, \320\275\320\260 \320\272\320\276\321\202\320\276\321\200\321\213\321\205 \320\276\321\202\321\201\321\203\321\202\321\201\321\202\320\262\321\203\320\265\321\202 \320\267\320\260\320\264\320\260\320\275\320\275\321\213\320\271 \321\201\320\276\321\200\321\202 \320\261\320\265\320\275\320\267\320\270\320\275\320\260:", nullptr));
        label_11->setText(QCoreApplication::translate("director", "\320\220\320\262\321\202\320\276\320\261\320\260\320\267\320\260 \321\201 \320\274\320\260\320\272\321\201\320\270\320\274\320\260\320\273\321\214\320\275\321\213\320\274 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276\320\274 \320\260\320\262\321\202\320\276\320\274\320\276\320\261\320\270\320\273\320\265\320\271:", nullptr));
        label_8->setText(QCoreApplication::translate("director", "\320\241\320\276\321\200\321\202 \320\261\320\265\320\275\320\267\320\270\320\275\320\260:", nullptr));
        sortAbsense->setText(QCoreApplication::translate("director", "\320\235\320\260\320\271\321\202\320\270", nullptr));
        maxAvtoCount->setText(QCoreApplication::translate("director", "\320\235\320\260\320\271\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class director: public Ui_director {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIRECTOR_H
