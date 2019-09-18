#ifndef PUNTO_H
#define PUNTO_H


class punto
{
public:
    double x,y;
    punto();
    punto(double,double);
    void modificar(double nx, double ny);
    void imprimir();
};

#endif // PUNTO_H
