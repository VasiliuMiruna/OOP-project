//
// Created by Miruna on 3/18/2021.
//

#ifndef POOLAB_VIN_H
#define POOLAB_VIN_H

#include <iostream>
#include <string>
#include "Produs.h"
using namespace std;

class Vin {

    string tip; ///varsat sau soi
    double volum;
    int bucata;
    string soi;
    string culoare;
    int an_culegere;
    string tara_origine;

public:
    ///constr si destr
    Vin(){};
    Vin(string, double, int, string, string, int, string);
    ~Vin();

    Vin(const Vin &v);

    ///getteri
    string getTip()const{return tip;}
    double getVolum()const{return volum;}
    int getBucata()const{return bucata;}
    string getSoi()const{return soi;}
    string getCuloare()const{return culoare;}
    int getAn_culegere()const{return an_culegere;}
    string getTara_origine()const{return tara_origine;}

    ///setteri
    void setTip(int tip){this->tip = tip;}
    void setVolum(double volum){this ->volum = volum;}
    void setBucata(int bucata){this -> bucata = bucata;}
    void setSoi(string soi){this->soi = soi;}
    void setCuloare(string culoare){this->culoare = culoare;}
    void setAn_culegere(int an_culegere){this -> an_culegere = an_culegere;}
    void setTara_origine(string tara_origine){this->tara_origine = tara_origine;}

    Vin operator=(const Vin &v);
};


#endif //POOLAB_VIN_H
