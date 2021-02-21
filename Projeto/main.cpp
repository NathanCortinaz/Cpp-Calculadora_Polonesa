#include "calcpol.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CalcPol w;
    w.show();

    return a.exec();
}
