#include "dialog.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    w.show(); //显示窗口
    
    return a.exec();
}
