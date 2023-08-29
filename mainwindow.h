#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<iostream>

class Neurona
{
public:
    int id, posicion_x, posicion_y, red, green, blue;
    float voltaje;

    Neurona *sig;
    Neurona();
    Neurona():id(1),  voltaje(122),  posicion_x(123),  posicion_y(321),  red(1),  green(2),  blue(3){};
    void print()const
    {
        std::cout<<"Neurona\n"<<"ID:"<<id<<"\nVoltaje:"<<voltaje<<"\nPosicion X:"<<posicion_x<<"\nPosicion Y:"<<posicion_y<<
        "\nRed:"<<red<<"\nGreen:"<<green<<"\nBlue:"<<blue<<std::endl;
    }
};

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class Administrar
{
private:
    Neurona *h;
public:
    Administrar()
    {
        h=nullptr;
    }
    void agregarInicio();
    void agregarFinal();
    void mostrar();
};


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    Neurona s;
};
#endif // MAINWINDOW_H
