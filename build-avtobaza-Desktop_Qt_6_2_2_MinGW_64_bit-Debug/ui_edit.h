/********************************************************************************
** Form generated from reading UI file 'edit.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_H
#define UI_EDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_edit
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *delAvto;
    QPushButton *insertAvto;
    QPushButton *changeAvto;
    QPushButton *outFileAvto;
    QLabel *label;
    QLineEdit *LE_ID_avto;
    QLabel *label_2;
    QComboBox *CB_ID_avtobaza;
    QLabel *label_3;
    QComboBox *CB_FK_sort_benz;
    QLabel *label_4;
    QLineEdit *LE_model;
    QLabel *label_5;
    QLineEdit *LE_marka;
    QLabel *label_6;
    QLineEdit *LE_type;
    QLabel *label_7;
    QLineEdit *LE_gos_nomer;
    QWidget *tab_2;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *delAZS;
    QPushButton *insertAZS;
    QPushButton *changeAZS;
    QPushButton *outFileAZS;
    QLabel *label_8;
    QLineEdit *LE_ID_AZS;
    QLabel *label_9;
    QLineEdit *LE_AZS_name;
    QLabel *label_10;
    QLineEdit *LE_AZS_address;
    QLabel *label_11;
    QLabel *label_12;
    QCheckBox *CheckBox_isOpen;
    QLineEdit *LE_sorta_benzina;
    QWidget *tab_3;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget_3;
    QGridLayout *gridLayout_3;
    QPushButton *delAvtobaza;
    QPushButton *insertAvtobaza;
    QPushButton *changeAvtobaza;
    QPushButton *outFileAvtobaza;
    QLabel *label_13;
    QLineEdit *LE_ID_avtobaza;
    QLabel *label_14;
    QLineEdit *LE_number;
    QLabel *label_15;
    QLineEdit *LE_avtobaza_address;

    void setupUi(QDialog *edit)
    {
        if (edit->objectName().isEmpty())
            edit->setObjectName(QString::fromUtf8("edit"));
        edit->resize(762, 223);
        tabWidget = new QTabWidget(edit);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 741, 201));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 10, 281, 151));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 256, 111));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        delAvto = new QPushButton(layoutWidget);
        delAvto->setObjectName(QString::fromUtf8("delAvto"));

        gridLayout->addWidget(delAvto, 1, 1, 1, 1);

        insertAvto = new QPushButton(layoutWidget);
        insertAvto->setObjectName(QString::fromUtf8("insertAvto"));

        gridLayout->addWidget(insertAvto, 0, 0, 1, 1);

        changeAvto = new QPushButton(layoutWidget);
        changeAvto->setObjectName(QString::fromUtf8("changeAvto"));

        gridLayout->addWidget(changeAvto, 1, 0, 1, 1);

        outFileAvto = new QPushButton(layoutWidget);
        outFileAvto->setObjectName(QString::fromUtf8("outFileAvto"));

        gridLayout->addWidget(outFileAvto, 0, 1, 1, 1);

        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(310, 10, 111, 16));
        LE_ID_avto = new QLineEdit(tab);
        LE_ID_avto->setObjectName(QString::fromUtf8("LE_ID_avto"));
        LE_ID_avto->setGeometry(QRect(310, 30, 113, 24));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(310, 60, 111, 16));
        CB_ID_avtobaza = new QComboBox(tab);
        CB_ID_avtobaza->setObjectName(QString::fromUtf8("CB_ID_avtobaza"));
        CB_ID_avtobaza->setGeometry(QRect(310, 80, 111, 24));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(310, 110, 111, 16));
        CB_FK_sort_benz = new QComboBox(tab);
        CB_FK_sort_benz->addItem(QString());
        CB_FK_sort_benz->addItem(QString());
        CB_FK_sort_benz->addItem(QString());
        CB_FK_sort_benz->addItem(QString());
        CB_FK_sort_benz->setObjectName(QString::fromUtf8("CB_FK_sort_benz"));
        CB_FK_sort_benz->setGeometry(QRect(310, 130, 111, 24));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(460, 10, 111, 16));
        LE_model = new QLineEdit(tab);
        LE_model->setObjectName(QString::fromUtf8("LE_model"));
        LE_model->setGeometry(QRect(460, 30, 113, 24));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(460, 60, 111, 16));
        LE_marka = new QLineEdit(tab);
        LE_marka->setObjectName(QString::fromUtf8("LE_marka"));
        LE_marka->setGeometry(QRect(460, 80, 113, 24));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(460, 110, 111, 16));
        LE_type = new QLineEdit(tab);
        LE_type->setObjectName(QString::fromUtf8("LE_type"));
        LE_type->setGeometry(QRect(460, 130, 113, 24));
        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(610, 10, 111, 16));
        LE_gos_nomer = new QLineEdit(tab);
        LE_gos_nomer->setObjectName(QString::fromUtf8("LE_gos_nomer"));
        LE_gos_nomer->setGeometry(QRect(610, 30, 113, 24));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 10, 281, 151));
        layoutWidget_2 = new QWidget(groupBox_2);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 30, 256, 111));
        gridLayout_2 = new QGridLayout(layoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        delAZS = new QPushButton(layoutWidget_2);
        delAZS->setObjectName(QString::fromUtf8("delAZS"));

        gridLayout_2->addWidget(delAZS, 1, 1, 1, 1);

        insertAZS = new QPushButton(layoutWidget_2);
        insertAZS->setObjectName(QString::fromUtf8("insertAZS"));

        gridLayout_2->addWidget(insertAZS, 0, 0, 1, 1);

        changeAZS = new QPushButton(layoutWidget_2);
        changeAZS->setObjectName(QString::fromUtf8("changeAZS"));

        gridLayout_2->addWidget(changeAZS, 1, 0, 1, 1);

        outFileAZS = new QPushButton(layoutWidget_2);
        outFileAZS->setObjectName(QString::fromUtf8("outFileAZS"));

        gridLayout_2->addWidget(outFileAZS, 0, 1, 1, 1);

        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(310, 10, 111, 16));
        LE_ID_AZS = new QLineEdit(tab_2);
        LE_ID_AZS->setObjectName(QString::fromUtf8("LE_ID_AZS"));
        LE_ID_AZS->setGeometry(QRect(310, 30, 113, 24));
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(310, 60, 111, 16));
        LE_AZS_name = new QLineEdit(tab_2);
        LE_AZS_name->setObjectName(QString::fromUtf8("LE_AZS_name"));
        LE_AZS_name->setGeometry(QRect(310, 80, 113, 24));
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(310, 110, 111, 16));
        LE_AZS_address = new QLineEdit(tab_2);
        LE_AZS_address->setObjectName(QString::fromUtf8("LE_AZS_address"));
        LE_AZS_address->setGeometry(QRect(310, 130, 411, 24));
        label_11 = new QLabel(tab_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(460, 10, 111, 16));
        label_12 = new QLabel(tab_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(460, 60, 101, 16));
        CheckBox_isOpen = new QCheckBox(tab_2);
        CheckBox_isOpen->setObjectName(QString::fromUtf8("CheckBox_isOpen"));
        CheckBox_isOpen->setGeometry(QRect(460, 80, 83, 22));
        LE_sorta_benzina = new QLineEdit(tab_2);
        LE_sorta_benzina->setObjectName(QString::fromUtf8("LE_sorta_benzina"));
        LE_sorta_benzina->setGeometry(QRect(460, 30, 113, 24));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        groupBox_3 = new QGroupBox(tab_3);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(0, 10, 281, 151));
        layoutWidget_3 = new QWidget(groupBox_3);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 30, 256, 111));
        gridLayout_3 = new QGridLayout(layoutWidget_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        delAvtobaza = new QPushButton(layoutWidget_3);
        delAvtobaza->setObjectName(QString::fromUtf8("delAvtobaza"));

        gridLayout_3->addWidget(delAvtobaza, 1, 1, 1, 1);

        insertAvtobaza = new QPushButton(layoutWidget_3);
        insertAvtobaza->setObjectName(QString::fromUtf8("insertAvtobaza"));

        gridLayout_3->addWidget(insertAvtobaza, 0, 0, 1, 1);

        changeAvtobaza = new QPushButton(layoutWidget_3);
        changeAvtobaza->setObjectName(QString::fromUtf8("changeAvtobaza"));

        gridLayout_3->addWidget(changeAvtobaza, 1, 0, 1, 1);

        outFileAvtobaza = new QPushButton(layoutWidget_3);
        outFileAvtobaza->setObjectName(QString::fromUtf8("outFileAvtobaza"));

        gridLayout_3->addWidget(outFileAvtobaza, 0, 1, 1, 1);

        label_13 = new QLabel(tab_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(310, 10, 111, 16));
        LE_ID_avtobaza = new QLineEdit(tab_3);
        LE_ID_avtobaza->setObjectName(QString::fromUtf8("LE_ID_avtobaza"));
        LE_ID_avtobaza->setGeometry(QRect(310, 30, 113, 24));
        label_14 = new QLabel(tab_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(310, 60, 111, 16));
        LE_number = new QLineEdit(tab_3);
        LE_number->setObjectName(QString::fromUtf8("LE_number"));
        LE_number->setGeometry(QRect(310, 80, 113, 24));
        label_15 = new QLabel(tab_3);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(310, 110, 55, 16));
        LE_avtobaza_address = new QLineEdit(tab_3);
        LE_avtobaza_address->setObjectName(QString::fromUtf8("LE_avtobaza_address"));
        LE_avtobaza_address->setGeometry(QRect(310, 130, 411, 24));
        tabWidget->addTab(tab_3, QString());

        retranslateUi(edit);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(edit);
    } // setupUi

    void retranslateUi(QDialog *edit)
    {
        edit->setWindowTitle(QCoreApplication::translate("edit", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("edit", "\320\237\320\260\320\275\320\265\320\273\321\214 \320\260\320\264\320\274\320\270\320\275\320\270\321\201\321\202\321\200\320\260\321\202\320\276\321\200\320\260", nullptr));
        delAvto->setText(QCoreApplication::translate("edit", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        insertAvto->setText(QCoreApplication::translate("edit", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        changeAvto->setText(QCoreApplication::translate("edit", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        outFileAvto->setText(QCoreApplication::translate("edit", "\320\241\320\272\320\260\321\207\320\260\321\202\321\214 \320\270\320\267 \321\204\320\260\320\271\320\273\320\260", nullptr));
        label->setText(QCoreApplication::translate("edit", "ID \320\260\320\262\321\202\320\276\320\274\320\276\320\261\320\270\320\273\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("edit", "ID \320\260\320\262\321\202\320\276\320\261\320\260\320\267\321\213", nullptr));
        label_3->setText(QCoreApplication::translate("edit", "\320\241\320\276\321\200\321\202 \320\261\320\265\320\275\320\267\320\270\320\275\320\260", nullptr));
        CB_FK_sort_benz->setItemText(0, QCoreApplication::translate("edit", "\320\220\320\23092", nullptr));
        CB_FK_sort_benz->setItemText(1, QCoreApplication::translate("edit", "\320\220\320\23095", nullptr));
        CB_FK_sort_benz->setItemText(2, QCoreApplication::translate("edit", "\320\220\320\23098", nullptr));
        CB_FK_sort_benz->setItemText(3, QCoreApplication::translate("edit", "\320\224\320\242", nullptr));

        label_4->setText(QCoreApplication::translate("edit", "\320\234\320\276\320\264\320\265\320\273\321\214", nullptr));
        label_5->setText(QCoreApplication::translate("edit", "\320\234\320\260\321\200\320\272\320\260", nullptr));
        label_6->setText(QCoreApplication::translate("edit", "\320\242\320\270\320\277", nullptr));
        label_7->setText(QCoreApplication::translate("edit", "\320\223\320\276\321\201. \320\275\320\276\320\274\320\265\321\200", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("edit", "\320\220\320\262\321\202\320\276\320\274\320\276\320\261\320\270\320\273\321\214", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("edit", "\320\237\320\260\320\275\320\265\320\273\321\214 \320\260\320\264\320\274\320\270\320\275\320\270\321\201\321\202\321\200\320\260\321\202\320\276\321\200\320\260", nullptr));
        delAZS->setText(QCoreApplication::translate("edit", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        insertAZS->setText(QCoreApplication::translate("edit", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        changeAZS->setText(QCoreApplication::translate("edit", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        outFileAZS->setText(QCoreApplication::translate("edit", "\320\241\320\272\320\260\321\207\320\260\321\202\321\214 \320\270\320\267 \321\204\320\260\320\271\320\273\320\260", nullptr));
        label_8->setText(QCoreApplication::translate("edit", "ID \320\220\320\227\320\241", nullptr));
        label_9->setText(QCoreApplication::translate("edit", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_10->setText(QCoreApplication::translate("edit", "\320\220\320\264\321\200\320\265\321\201", nullptr));
        label_11->setText(QCoreApplication::translate("edit", "\320\241\320\276\321\200\321\202\320\260 \320\261\320\265\320\275\320\267\320\270\320\275\320\260", nullptr));
        label_12->setText(QCoreApplication::translate("edit", "\320\241\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265", nullptr));
        CheckBox_isOpen->setText(QCoreApplication::translate("edit", "\320\236\321\202\320\272\321\200\321\213\321\202\320\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("edit", "\320\220\320\227\320\241", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("edit", "\320\237\320\260\320\275\320\265\320\273\321\214 \320\260\320\264\320\274\320\270\320\275\320\270\321\201\321\202\321\200\320\260\321\202\320\276\321\200\320\260", nullptr));
        delAvtobaza->setText(QCoreApplication::translate("edit", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        insertAvtobaza->setText(QCoreApplication::translate("edit", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        changeAvtobaza->setText(QCoreApplication::translate("edit", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        outFileAvtobaza->setText(QCoreApplication::translate("edit", "\320\241\320\272\320\260\321\207\320\260\321\202\321\214 \320\270\320\267 \321\204\320\260\320\271\320\273\320\260", nullptr));
        label_13->setText(QCoreApplication::translate("edit", "ID \320\260\320\262\321\202\320\276\320\261\320\260\320\267\321\213", nullptr));
        label_14->setText(QCoreApplication::translate("edit", "\320\242\320\265\320\273\320\265\321\204\320\276\320\275", nullptr));
        label_15->setText(QCoreApplication::translate("edit", "\320\220\320\264\321\200\320\265\321\201", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("edit", "\320\220\320\262\321\202\320\276\320\261\320\260\320\267\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class edit: public Ui_edit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_H
