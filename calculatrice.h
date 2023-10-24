#ifndef CALCULATRICE_H
#define CALCULATRICE_H

#include <QWidget>

namespace Ui {
class Calculatrice;
}

class Calculatrice : public QWidget
{
    Q_OBJECT
    
public:
    explicit Calculatrice(QWidget *parent = 0);
    ~Calculatrice();

public slots:
    void on_egal_clicked();
    
private:
    Ui::Calculatrice *ui;
};

#endif // CALCULATRICE_H
