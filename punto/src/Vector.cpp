#include<iostream>
#include "Vector.h"
using namespace std;

Vector::Vector()
{

}

void Vector :: imprimir()
{
    inicial.imprimir();
    fin.imprimir();
    cout << "--->" ; fin.imprimir() ;
}
