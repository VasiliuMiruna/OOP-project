//
// Created by Miruna on 3/18/2021.
//

#ifndef POOLAB_CARTOFI_H
#define POOLAB_CARTOFI_H

#include <iostream>
#include <string>
#include "Produs.h"
using namespace std;

class Cartofi {

    string culoare;
    int cantitate;
public:
    ///constr si destr
    Cartofi(){};
    Cartofi(string, int);
    ~Cartofi();
     Cartofi(const Cartofi &c);

    ///getteri
    string getCuloare()const{return culoare;}
    int getCantitate()const{return cantitate;}

    ///setteri
    void setCuloare(string culoare){this->culoare = culoare;}
    void setCantitate(int cantitate){this->cantitate = cantitate;}

    Cartofi operator=(const Cartofi &c);

};


#endif //POOLAB_CARTOFI_H
