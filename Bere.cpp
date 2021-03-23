//
// Created by Miruna on 3/18/2021.
//

#include "Bere.h"

Bere :: Bere(string brand, string tip, int cant)
{
    this->brand = brand;
    this->tip = tip;
    this->cant = cant;
}
Bere :: ~Bere(){

}

Bere :: Bere(const Bere &b)
{
    this->brand = b.brand;
    this->tip = b.tip;
    this->cant = b.cant;
}
Bere Bere :: operator=(const Bere &b)
{
    this->brand = b.brand;
    this->tip = b.tip;
    this->cant = b.cant;

    return *this;
}