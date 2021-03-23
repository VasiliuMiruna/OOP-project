//
// Created by Miruna on 3/18/2021.
//

#include "Jucarii.h"

Jucarii :: Jucarii(int cant, char* nume, char sex, bool baterii)
{
    this->cant = cant;
    this->nume = nume;
    this->sex = sex;
    this->baterii = baterii;
}
Jucarii::~Jucarii(){
    delete nume;
};

Jucarii :: Jucarii(const Jucarii &j)
{
    this->cant = cant;
    this->nume = nume;
    this->sex = sex;
    this->baterii = baterii;
}

Jucarii Jucarii::operator=(const Jucarii &j)
{
    this->cant = cant;
    this->nume = nume;
    this->sex = sex;
    this->baterii = baterii;
    return *this;
}