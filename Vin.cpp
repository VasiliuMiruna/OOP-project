//
// Created by Miruna on 3/18/2021.
//

#include "Vin.h"

Vin::Vin(string tip, double volum, int bucata, string soi, string culoare, int an_culegere, string tara_origine)
{
    this->tip = tip;
    this->volum = volum;
    this->bucata = bucata;
    this->soi = soi;
    this->culoare = culoare;
    this->an_culegere = an_culegere;
    this->tara_origine = tara_origine;
}
Vin::~Vin()
{

}

Vin :: Vin(const Vin &v)
{
    this->tip = v.tip;
    this->volum = v.volum;
    this->bucata = v.bucata;
    this->soi = v.soi;
    this->culoare = v.culoare;
    this->an_culegere = v.an_culegere;
    this->tara_origine = v.tara_origine;
}

Vin Vin:: operator= (const Vin &v)
{
    this->tip = v.tip;
    this->volum = v.volum;
    this->bucata = v.bucata;
    this->soi = v.soi;
    this->culoare = v.culoare;
    this->an_culegere = v.an_culegere;
    this->tara_origine = v.tara_origine;

    return *this;
}