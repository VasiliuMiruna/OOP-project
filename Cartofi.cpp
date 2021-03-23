//
// Created by Miruna on 3/18/2021.
//

#include "Cartofi.h"
Cartofi:: Cartofi(string culoare, int cantitate)
{
    this->culoare = culoare;
    this->cantitate = cantitate;

}
Cartofi::~Cartofi(){

}
Cartofi :: Cartofi(const Cartofi &c)
{
    this->culoare = c.culoare;
    this->cantitate = c.cantitate;

}
Cartofi Cartofi :: operator=(const Cartofi &c)
{
    this->culoare = c.culoare;
    this->cantitate = c.cantitate;

    return *this;
}