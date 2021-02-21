#ifndef CALCPOL_H
#define CALCPOL_H

#include <QWidget>
#include <QStack>
#include <QScrollBar>

namespace Ui {
class CalcPol;
}

class CalcPol : public QWidget
{
    Q_OBJECT

public:
    explicit CalcPol(QWidget *parent = 0);
    ~CalcPol();
    void pop();
    void refresh();

    int tipo;
    QStack<int> stack;
    int num1, num2, result;

private slots:
    void on_n1_clicked();

    void on_n2_clicked();

    void on_n3_clicked();

    void on_n4_clicked();

    void on_n5_clicked();

    void on_n6_clicked();

    void on_n7_clicked();

    void on_n8_clicked();

    void on_n9_clicked();

    void on_n0_clicked();

    void on_add_clicked();

    void on_sub_clicked();

    void on_mul_clicked();

    void on_div_clicked();

    void on_clear_clicked();

    void on_del_clicked();

    void on_rol_clicked();

    void on_enter_clicked();

    void on_up_clicked();

    void on_down_clicked();

private:
    Ui::CalcPol *ui;
};

#endif // CALCPOL_H
