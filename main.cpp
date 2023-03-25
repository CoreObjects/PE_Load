#include "PE_Load.h"
#include <QtWidgets/QApplication>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PE_Load w;
    w.show();
    return a.exec();
}
