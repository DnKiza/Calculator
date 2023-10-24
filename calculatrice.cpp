#include "calculatrice.h"
#include "ui_calculatrice.h"

Calculatrice::Calculatrice(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Calculatrice)
{
    ui->setupUi(this);
}

void Calculatrice::on_egal_clicked()
{
   double somme=0;
    if (ui->operation->currentIndex()==0){
    somme=ui->nombre1->value()+ui->nombre2->value();}
    else if(ui->operation->currentIndex()==1)
       {
        somme=ui->nombre1->value()-ui->nombre2->value();
    }
    else if(ui->operation->currentIndex()==2)
       {
        somme=ui->nombre1->value()*ui->nombre2->value();
    }
    else if(ui->operation->currentIndex()==3)
       {
        somme=ui->nombre1->value()/(double)ui->nombre2->value();
    }
    ui->resultat->setNum(somme);
}

Calculatrice::~Calculatrice()
{
    delete ui;
}
