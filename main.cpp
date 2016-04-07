#include <QCoreApplication>
#include "second.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    First fr;
    fr.RunStaticFun();

    Second sc;
    sc.RunStaticFun();

    return a.exec();
}

