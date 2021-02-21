/********************************************************************************
** Form generated from reading UI file 'calcpol.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCPOL_H
#define UI_CALCPOL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalcPol
{
public:
    QTextEdit *view;
    QLineEdit *insert;
    QPushButton *clear;
    QPushButton *add;
    QPushButton *n1;
    QPushButton *n2;
    QPushButton *n3;
    QPushButton *sub;
    QPushButton *n5;
    QPushButton *n6;
    QPushButton *n4;
    QPushButton *mul;
    QPushButton *n8;
    QPushButton *n9;
    QPushButton *down;
    QPushButton *up;
    QPushButton *n7;
    QPushButton *n0;
    QPushButton *div;
    QPushButton *rol;
    QPushButton *del;
    QPushButton *enter;

    void setupUi(QWidget *CalcPol)
    {
        if (CalcPol->objectName().isEmpty())
            CalcPol->setObjectName(QStringLiteral("CalcPol"));
        CalcPol->resize(250, 412);
        view = new QTextEdit(CalcPol);
        view->setObjectName(QStringLiteral("view"));
        view->setGeometry(QRect(10, 10, 231, 101));
        QFont font;
        font.setPointSize(12);
        view->setFont(font);
        view->setLayoutDirection(Qt::LeftToRight);
        view->setAutoFormatting(QTextEdit::AutoNone);
        view->setLineWrapMode(QTextEdit::WidgetWidth);
        insert = new QLineEdit(CalcPol);
        insert->setObjectName(QStringLiteral("insert"));
        insert->setGeometry(QRect(10, 120, 171, 31));
        insert->setFont(font);
        clear = new QPushButton(CalcPol);
        clear->setObjectName(QStringLiteral("clear"));
        clear->setGeometry(QRect(190, 120, 51, 31));
        clear->setFont(font);
        add = new QPushButton(CalcPol);
        add->setObjectName(QStringLiteral("add"));
        add->setGeometry(QRect(190, 160, 51, 41));
        add->setFont(font);
        n1 = new QPushButton(CalcPol);
        n1->setObjectName(QStringLiteral("n1"));
        n1->setGeometry(QRect(10, 160, 51, 41));
        n1->setFont(font);
        n2 = new QPushButton(CalcPol);
        n2->setObjectName(QStringLiteral("n2"));
        n2->setGeometry(QRect(70, 160, 51, 41));
        n2->setFont(font);
        n3 = new QPushButton(CalcPol);
        n3->setObjectName(QStringLiteral("n3"));
        n3->setGeometry(QRect(130, 160, 51, 41));
        n3->setFont(font);
        sub = new QPushButton(CalcPol);
        sub->setObjectName(QStringLiteral("sub"));
        sub->setGeometry(QRect(190, 210, 51, 41));
        sub->setFont(font);
        n5 = new QPushButton(CalcPol);
        n5->setObjectName(QStringLiteral("n5"));
        n5->setGeometry(QRect(70, 210, 51, 41));
        n5->setFont(font);
        n6 = new QPushButton(CalcPol);
        n6->setObjectName(QStringLiteral("n6"));
        n6->setGeometry(QRect(130, 210, 51, 41));
        n6->setFont(font);
        n4 = new QPushButton(CalcPol);
        n4->setObjectName(QStringLiteral("n4"));
        n4->setGeometry(QRect(10, 210, 51, 41));
        n4->setFont(font);
        mul = new QPushButton(CalcPol);
        mul->setObjectName(QStringLiteral("mul"));
        mul->setGeometry(QRect(190, 260, 51, 41));
        mul->setFont(font);
        n8 = new QPushButton(CalcPol);
        n8->setObjectName(QStringLiteral("n8"));
        n8->setGeometry(QRect(70, 260, 51, 41));
        n8->setFont(font);
        n9 = new QPushButton(CalcPol);
        n9->setObjectName(QStringLiteral("n9"));
        n9->setGeometry(QRect(130, 260, 51, 41));
        n9->setFont(font);
        down = new QPushButton(CalcPol);
        down->setObjectName(QStringLiteral("down"));
        down->setGeometry(QRect(130, 310, 51, 41));
        down->setFont(font);
        up = new QPushButton(CalcPol);
        up->setObjectName(QStringLiteral("up"));
        up->setGeometry(QRect(10, 310, 51, 41));
        up->setFont(font);
        n7 = new QPushButton(CalcPol);
        n7->setObjectName(QStringLiteral("n7"));
        n7->setGeometry(QRect(10, 260, 51, 41));
        n7->setFont(font);
        n0 = new QPushButton(CalcPol);
        n0->setObjectName(QStringLiteral("n0"));
        n0->setGeometry(QRect(70, 310, 51, 41));
        n0->setFont(font);
        div = new QPushButton(CalcPol);
        div->setObjectName(QStringLiteral("div"));
        div->setGeometry(QRect(190, 310, 51, 41));
        div->setFont(font);
        rol = new QPushButton(CalcPol);
        rol->setObjectName(QStringLiteral("rol"));
        rol->setGeometry(QRect(70, 360, 51, 41));
        rol->setFont(font);
        del = new QPushButton(CalcPol);
        del->setObjectName(QStringLiteral("del"));
        del->setGeometry(QRect(10, 360, 51, 41));
        del->setFont(font);
        enter = new QPushButton(CalcPol);
        enter->setObjectName(QStringLiteral("enter"));
        enter->setGeometry(QRect(130, 360, 111, 41));
        enter->setFont(font);

        retranslateUi(CalcPol);

        QMetaObject::connectSlotsByName(CalcPol);
    } // setupUi

    void retranslateUi(QWidget *CalcPol)
    {
        CalcPol->setWindowTitle(QApplication::translate("CalcPol", "Calculadora", Q_NULLPTR));
        view->setHtml(QApplication::translate("CalcPol", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        clear->setText(QApplication::translate("CalcPol", "Clear", Q_NULLPTR));
        add->setText(QApplication::translate("CalcPol", "+", Q_NULLPTR));
        n1->setText(QApplication::translate("CalcPol", "1", Q_NULLPTR));
        n2->setText(QApplication::translate("CalcPol", "2", Q_NULLPTR));
        n3->setText(QApplication::translate("CalcPol", "3", Q_NULLPTR));
        sub->setText(QApplication::translate("CalcPol", "-", Q_NULLPTR));
        n5->setText(QApplication::translate("CalcPol", "5", Q_NULLPTR));
        n6->setText(QApplication::translate("CalcPol", "6", Q_NULLPTR));
        n4->setText(QApplication::translate("CalcPol", "4", Q_NULLPTR));
        mul->setText(QApplication::translate("CalcPol", "x", Q_NULLPTR));
        n8->setText(QApplication::translate("CalcPol", "8", Q_NULLPTR));
        n9->setText(QApplication::translate("CalcPol", "9", Q_NULLPTR));
        down->setText(QApplication::translate("CalcPol", "\342\206\223", Q_NULLPTR));
        up->setText(QApplication::translate("CalcPol", "\342\206\221", Q_NULLPTR));
        n7->setText(QApplication::translate("CalcPol", "7", Q_NULLPTR));
        n0->setText(QApplication::translate("CalcPol", "0", Q_NULLPTR));
        div->setText(QApplication::translate("CalcPol", "\303\267", Q_NULLPTR));
        rol->setText(QApplication::translate("CalcPol", "Rol", Q_NULLPTR));
        del->setText(QApplication::translate("CalcPol", "Del", Q_NULLPTR));
        enter->setText(QApplication::translate("CalcPol", "Enter", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CalcPol: public Ui_CalcPol {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCPOL_H
