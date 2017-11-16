/********************************************************************************
** Form generated from reading UI file 'serialtool.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIALTOOL_H
#define UI_SERIALTOOL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_serialtoolClass
{
public:
    QPushButton *connect;
    QComboBox *comboBox;
    QTextBrowser *redata;
    QPlainTextEdit *senddata;
    QLabel *label;
    QLabel *label_2;
    QComboBox *bps;
    QLabel *label_3;
    QComboBox *datawei;
    QLabel *label_4;
    QComboBox *jiaoyan;
    QLabel *label_5;
    QComboBox *stopwei;
    QPushButton *clear;
    QPushButton *save;
    QPushButton *send;
    QCheckBox *hexdisplay;
    QCheckBox *hexsend;
    QCheckBox *timesend;
    QLabel *label_6;
    QLineEdit *zhouqi;
    QLabel *label_7;

    void setupUi(QWidget *serialtoolClass)
    {
        if (serialtoolClass->objectName().isEmpty())
            serialtoolClass->setObjectName(QStringLiteral("serialtoolClass"));
        serialtoolClass->resize(1096, 665);
        connect = new QPushButton(serialtoolClass);
        connect->setObjectName(QStringLiteral("connect"));
        connect->setGeometry(QRect(860, 300, 221, 51));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        connect->setFont(font);
        comboBox = new QComboBox(serialtoolClass);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(860, 50, 221, 31));
        redata = new QTextBrowser(serialtoolClass);
        redata->setObjectName(QStringLiteral("redata"));
        redata->setGeometry(QRect(10, 10, 841, 481));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(12);
        redata->setFont(font1);
        senddata = new QPlainTextEdit(serialtoolClass);
        senddata->setObjectName(QStringLiteral("senddata"));
        senddata->setGeometry(QRect(10, 500, 601, 151));
        senddata->setFont(font1);
        label = new QLabel(serialtoolClass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(860, 10, 72, 31));
        label->setFont(font1);
        label_2 = new QLabel(serialtoolClass);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(860, 100, 72, 31));
        label_2->setFont(font1);
        bps = new QComboBox(serialtoolClass);
        bps->setObjectName(QStringLiteral("bps"));
        bps->setGeometry(QRect(930, 100, 151, 31));
        bps->setFont(font1);
        label_3 = new QLabel(serialtoolClass);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(860, 150, 72, 31));
        label_3->setFont(font1);
        datawei = new QComboBox(serialtoolClass);
        datawei->setObjectName(QStringLiteral("datawei"));
        datawei->setGeometry(QRect(930, 150, 151, 31));
        datawei->setFont(font1);
        label_4 = new QLabel(serialtoolClass);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(860, 200, 72, 31));
        label_4->setFont(font1);
        jiaoyan = new QComboBox(serialtoolClass);
        jiaoyan->setObjectName(QStringLiteral("jiaoyan"));
        jiaoyan->setGeometry(QRect(930, 200, 151, 31));
        jiaoyan->setFont(font1);
        label_5 = new QLabel(serialtoolClass);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(860, 250, 72, 31));
        label_5->setFont(font1);
        stopwei = new QComboBox(serialtoolClass);
        stopwei->setObjectName(QStringLiteral("stopwei"));
        stopwei->setGeometry(QRect(930, 250, 151, 31));
        stopwei->setFont(font1);
        clear = new QPushButton(serialtoolClass);
        clear->setObjectName(QStringLiteral("clear"));
        clear->setGeometry(QRect(860, 370, 111, 51));
        clear->setFont(font1);
        save = new QPushButton(serialtoolClass);
        save->setObjectName(QStringLiteral("save"));
        save->setGeometry(QRect(980, 370, 101, 51));
        save->setFont(font1);
        send = new QPushButton(serialtoolClass);
        send->setObjectName(QStringLiteral("send"));
        send->setGeometry(QRect(630, 500, 211, 51));
        send->setFont(font);
        hexdisplay = new QCheckBox(serialtoolClass);
        hexdisplay->setObjectName(QStringLiteral("hexdisplay"));
        hexdisplay->setGeometry(QRect(870, 440, 171, 41));
        QFont font2;
        font2.setFamily(QStringLiteral("Agency FB"));
        font2.setPointSize(14);
        hexdisplay->setFont(font2);
        hexsend = new QCheckBox(serialtoolClass);
        hexsend->setObjectName(QStringLiteral("hexsend"));
        hexsend->setGeometry(QRect(670, 550, 171, 41));
        hexsend->setFont(font2);
        timesend = new QCheckBox(serialtoolClass);
        timesend->setObjectName(QStringLiteral("timesend"));
        timesend->setGeometry(QRect(670, 580, 171, 41));
        timesend->setFont(font2);
        label_6 = new QLabel(serialtoolClass);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(630, 620, 111, 31));
        label_6->setFont(font1);
        zhouqi = new QLineEdit(serialtoolClass);
        zhouqi->setObjectName(QStringLiteral("zhouqi"));
        zhouqi->setGeometry(QRect(750, 620, 91, 31));
        label_7 = new QLabel(serialtoolClass);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(880, 530, 201, 91));
        label_7->setCursor(QCursor(Qt::ArrowCursor));

        retranslateUi(serialtoolClass);

        QMetaObject::connectSlotsByName(serialtoolClass);
    } // setupUi

    void retranslateUi(QWidget *serialtoolClass)
    {
        serialtoolClass->setWindowTitle(QApplication::translate("serialtoolClass", "serialtool", Q_NULLPTR));
        connect->setText(QApplication::translate("serialtoolClass", "\350\277\236\346\216\245\344\270\262\345\217\243", Q_NULLPTR));
        label->setText(QApplication::translate("serialtoolClass", "\344\270\262\345\217\243\345\217\267", Q_NULLPTR));
        label_2->setText(QApplication::translate("serialtoolClass", "\346\263\242\347\211\271\347\216\207", Q_NULLPTR));
        bps->setCurrentText(QString());
        label_3->setText(QApplication::translate("serialtoolClass", "\346\225\260\346\215\256\344\275\215", Q_NULLPTR));
        label_4->setText(QApplication::translate("serialtoolClass", "\346\240\241\351\252\214\344\275\215", Q_NULLPTR));
        label_5->setText(QApplication::translate("serialtoolClass", "\345\201\234\346\255\242\344\275\215", Q_NULLPTR));
        clear->setText(QApplication::translate("serialtoolClass", "\346\270\205\351\231\244\346\216\245\346\224\266", Q_NULLPTR));
        save->setText(QApplication::translate("serialtoolClass", "\344\277\235\345\255\230\346\225\260\346\215\256", Q_NULLPTR));
        send->setText(QApplication::translate("serialtoolClass", "\345\217\221\351\200\201\346\225\260\346\215\256", Q_NULLPTR));
        hexdisplay->setText(QApplication::translate("serialtoolClass", "16\350\277\233\345\210\266\346\230\276\347\244\272", Q_NULLPTR));
        hexsend->setText(QApplication::translate("serialtoolClass", "16\350\277\233\345\210\266\345\217\221\351\200\201", Q_NULLPTR));
        timesend->setText(QApplication::translate("serialtoolClass", "\345\256\232 \346\227\266 \345\217\221 \351\200\201", Q_NULLPTR));
        label_6->setText(QApplication::translate("serialtoolClass", "\345\221\250\346\234\237\357\274\210ms\357\274\211\357\274\232", Q_NULLPTR));
        label_7->setText(QApplication::translate("serialtoolClass", "<html><head/><body><p><span style=\" font-size:18pt;\">\350\245\277\345\256\211\345\267\245\347\250\213\345\244\247\345\255\246</span></p><p><span style=\" font-size:18pt;\">\347\224\265\345\255\220\350\256\276\350\256\241\345\215\217\344\274\232</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class serialtoolClass: public Ui_serialtoolClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIALTOOL_H
