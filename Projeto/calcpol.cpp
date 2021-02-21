#include "calcpol.h"
#include "ui_calcpol.h"

CalcPol::CalcPol(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CalcPol)
{
    ui->setupUi(this);
    tipo = 0;
}

CalcPol::~CalcPol()
{
    delete ui;
}

void CalcPol::pop()
{
    num1 = stack.pop();
    num2 = stack.pop();
}

void CalcPol::refresh()
{
    ui->view->clear();
    int aux = 0;
    while(aux<stack.length())
    {
        ui->view->append(QString("%1").arg(stack[aux]));
        ui->view->setAlignment(Qt::AlignRight);
        aux++;
    }
}

void CalcPol::on_n1_clicked()
{
    if(tipo==3)
        ui->insert->clear();
    ui->insert->insert("1");
    tipo = 1;
}

void CalcPol::on_n2_clicked()
{
    if(tipo==3)
        ui->insert->clear();
    ui->insert->insert("2");
    tipo = 1;
}

void CalcPol::on_n3_clicked()
{
    if(tipo==3)
        ui->insert->clear();
    ui->insert->insert("3");
    tipo = 1;
}

void CalcPol::on_n4_clicked()
{
    if(tipo==3)
        ui->insert->clear();
    ui->insert->insert("4");
    tipo = 1;
}

void CalcPol::on_n5_clicked()
{
    if(tipo==3)
        ui->insert->clear();
    ui->insert->insert("5");
    tipo = 1;
}

void CalcPol::on_n6_clicked()
{
    if(tipo==3)
        ui->insert->clear();
    ui->insert->insert("6");
    tipo = 1;
}

void CalcPol::on_n7_clicked()
{
    if(tipo==3)
        ui->insert->clear();
    ui->insert->insert("7");
    tipo = 1;
}

void CalcPol::on_n8_clicked()
{
    if(tipo==3)
        ui->insert->clear();
    ui->insert->insert("8");
    tipo = 1;
}

void CalcPol::on_n9_clicked()
{
    if(tipo==3)
        ui->insert->clear();
    ui->insert->insert("9");
    tipo = 1;
}

void CalcPol::on_n0_clicked()
{
    if(tipo==3)
        ui->insert->clear();
    ui->insert->insert("0");
    tipo = 1;
}

void CalcPol::on_add_clicked()
{
    if(stack.length()>=2)
    {
        pop();
        result = num1 + num2;
        stack.push(result);
    }
    refresh();
}

void CalcPol::on_sub_clicked()
{
    if(stack.length()>=2)
    {
        pop();
        result = num2 - num1;
        stack.push(result);
    }
    refresh();
}

void CalcPol::on_mul_clicked()
{
    if(stack.length()>=2)
    {
        pop();
        result = num1 * num2;
        stack.push(result);
    }
    refresh();
}

void CalcPol::on_div_clicked()
{
    if(stack.length()>=2)
    {
        pop();
        if(num1==0)
        {
            stack.push(num2);
            stack.push(num1);
            ui->insert->clear();
            ui->insert->insert("Erro: Divisão por zero!");
            tipo = 3;
        }
        else
        {
            result = num2 / num1;
            stack.push(result);
        }
    }
    refresh();
}

void CalcPol::on_clear_clicked()
{
    ui->insert->clear();
    tipo = 0;
}

void CalcPol::on_del_clicked()
{
    if(stack.isEmpty()==false)
    {
        stack.pop();
        refresh();
    }
}

void CalcPol::on_rol_clicked()
{
    if(stack.length()>=2)
    {
        pop();
        stack.push(num1);
        stack.push(num2);
        refresh();
    }
}

void CalcPol::on_enter_clicked()
{
    if(tipo == 1)
    {
        stack.push(ui->insert->text().toInt());
        refresh();
        ui->insert->clear();
        tipo = 0;
    }
}

void CalcPol::on_up_clicked()
{
    ui->view->verticalScrollBar()->setValue(ui->view->verticalScrollBar()->value()-20);
}

void CalcPol::on_down_clicked()
{
    ui->view->verticalScrollBar()->setValue(ui->view->verticalScrollBar()->value()+20);
}
