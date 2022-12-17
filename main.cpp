#include "HtmlFileEditor.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HtmlFileEditor w;
    w.resize(750, 500);
    w.show();
    return a.exec();
}
