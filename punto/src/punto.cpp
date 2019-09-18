#include<iostream>
#include "punto.h"
using namespace std;

punto::punto()
{
    x=0;
    y=9;
}

punto::punto(double nx , double ny)
{
    x=nx;
    y=ny;
}
void punto::modificar(double nx, double ny)
{
    x +=nx;
    y +=ny;
}
void punto::imprimir()
{
    cout << "("<<x << ","<<y<<")"<<endl;
}

