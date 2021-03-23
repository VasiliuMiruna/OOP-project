//
// Created by Miruna on 3/18/2021.
//

#ifndef POOLAB_VARZA_H
#define POOLAB_VARZA_H

#include <iostream>
#include "Produs.h"
using namespace std;


class Varza {
    int nr_bucati;
public:
    ///construct si destruct
    Varza(){};
    Varza(int);
    ~Varza();

    Varza(const Varza &v);

    ///getteri
    int getVarza()const{return nr_bucati;}

    ///setteri
    void setVarza(int nr_bucati){this->nr_bucati = nr_bucati;}

    Varza operator=(const Varza &v);
};


#endif //POOLAB_VARZA_H
