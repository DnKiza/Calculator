#include <QApplication>
#include "calculatrice.h"

int main(int argc,char* argv[])
{
    QApplication app(argc,argv);
    Calculatrice Fenetre;
    Fenetre.show();
    Fenetre.setWindowTitle("Calculator");
    return app.exec();
}
