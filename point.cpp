#include "point.h"

Point::Point()
{
    //ctor
    abscisse = 0;
    ordonnee = 0;
}

Point::Point(int abs,int ord)
{
    abscisse = abs;
    ordonnee = ord;
}

Point::~Point()
{
    //dtor
}

int Point::getAbscisse()
{
    return abscisse;
}

void Point::setAbscisse(int val)
{
    abscisse = val;
}

int Point::getOrdonnee()
{
    return ordonnee;
}

void Point::setOrdonnee(int val)
{
    ordonnee = val;
}


Point::Point(const Point& other)
{
    //copy ctor
}

Point& Point::operator=(const Point& rhs)
{
    if (this != &rhs){
        abscisse = rhs.abscisse;
        ordonnee = rhs.ordonnee;
    } // handle self assignment
    //assignment operator
    return *this;
}

