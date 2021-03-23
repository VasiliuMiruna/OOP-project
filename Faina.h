//
// Created by Miruna on 3/18/2021.
//

#ifndef POOLAB_FAINA_H
#define POOLAB_FAINA_H

#include <iostream>
#include "Produs.h"

class Faina {
    double cantitate;
    int calitate;
public:
    ///construct si destruct

    Faina(double, int);
    ~Faina();
    Faina(const Faina &f);

    ///getteri
    double getCantitate()const{return cantitate;}
    int getCalitate()const{return calitate;}

    ///setteri
    void setCantitate(double cantitate){this -> cantitate = cantitate;}
    void setCalitate(int calitate){this -> calitate = calitate;}

    Faina operator=(const Faina &f);
};


#endif //POOLAB_FAINA_H
