#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

Neurona::Neurona()
{
    id=0;
    voltaje=0;
    posicion_x=0;
    posicion_y=0;
    red=0;
    green=0;
    blue=0;
}
Neurona::Neurona()
{
    this->id=id;
    this->voltaje=voltaje;
    this->posicion_x=posicion_x;
    this->posicion_y=posicion_y;
    this->red=red;
    this->green=green;
    this->blue=blue;
}

void MainWindow::on_pushButton_clicked()
{
    s.print();
}

void Administrar::agregarInicio()
{
    int id, posicion_x, posicion_y, red, green, blue;
    float voltaje;
    Neurona *tmp=new Neurona();
    if(!h)
    {
        h=tmp;
    }
    else
    {
        tmp->sig=h;
        h=tmp;
    }
}
void Administrar::agregarFinal()
{
    int id, posicion_x, posicion_y, red, green, blue;
    float voltaje;
    Neurona *tmp=new Neurona();
    if(!h)
    {
        h=tmp;
    }
    else
    {
        Neurona *aux=h;
        while(aux->sig!=nullptr)
        {
            aux=aux->sig;
        }
        aux->sig=tmp;
    }
}
void Administrar::mostrar()
{
    Neurona *aux=h;
    while(aux!=nullptr)
    {
        std::cout<<"ID:"<<aux->id<<std::endl;
        std::cout<<"Voltaje:"<<aux->voltaje<<std::endl;
        std::cout<<"Posicion X:"<<aux->posicion_x<<std::endl;
        std::cout<<"Posicion Y:"<<aux->posicion_y<<std::endl;
        std::cout<<"Red:"<<aux->red<<std::endl;
        std::cout<<"Green:"<<aux->green<<std::endl;
        std::cout<<"Blue:"<<aux->blue<<std::endl;
        aux=aux->sig;
    }
}
