//
// Created by Miruna on 3/18/2021.
//

#include "Faina.h"

Faina::Faina(double cantitate, int calitate)
{
    this -> cantitate = cantitate;
    this ->calitate = calitate;
}
Faina::~Faina()
{

}
Faina :: Faina(const Faina &f)
{
    this -> cantitate = f.cantitate;
    this ->calitate = f.calitate;
}
Faina Faina :: operator=(const Faina &f)
{
    this -> cantitate = f.cantitate;
    this ->calitate = f.calitate;

    return *this;
}