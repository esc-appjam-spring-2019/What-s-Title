#include "safe.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Safe w;
    w.showFullScreen();

    return a.exec();
}
