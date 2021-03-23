//
// Created by Miruna on 3/18/2021.
//

#ifndef POOLAB_BERE_H
#define POOLAB_BERE_H

#include <iostream>
#include <string>
#include "Produs.h"

using namespace std;

class Bere {
    string brand;
    string tip;
    int cant;
public:
    ///constr si destr
    Bere(){};
    Bere(string, string, int);
    ~Bere();

    Bere(const Bere &b);

    ///getteri
    string getBrand()const{return brand;}
    string getTip()const{return tip;}
    int getCant()const{return cant;}

    ///setteri
    void setBrand(string brand){this->brand = brand;}
    void setTip(string tip){this->tip = tip;}
    void setCant(int cant){this->cant = cant;}

    Bere operator=(const Bere &b);
};


#endif //POOLAB_BERE_H
