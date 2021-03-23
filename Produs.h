//
// Created by Miruna on 3/18/2021.
//

#ifndef POOLAB_PRODUS_H
#define POOLAB_PRODUS_H

#include <iostream>
#include <string>

using namespace std;

class Produs {
    string nume;
    int pret;
    bool stoc;
    double cant;
    string unit_mas;
    bool expirat;
    static int nr_total_produse;
    int buget_final;



public:
    ///constructori si destructori
    Produs(){};
    Produs(string, int, bool, double, string, bool);
    ~Produs();

    ///getter
    string getNume()const{return nume;}
    int getPret()const{return pret;}
    bool getStoc()const{return stoc;}
    double getCant()const{return cant;}
    string getUnit_mas()const{return unit_mas;}
    bool getExpirat()const{return expirat;}
    int getBuget_Final()const{return buget_final;}

    ///setteri
    void setNume(string nume){this->nume = nume;}
    void setPret(int pret){this->pret = pret;}
    void setStoc(bool stoc){this->stoc = stoc;}
    void setCant(double cant){this->cant = cant;}
    void setUnit_mas(string unit_mas){this->unit_mas = unit_mas;}
    void setExpirat(bool expirat){this->expirat = expirat;}
    void setBuget_Final(int buget_final){this->buget_final = buget_final;}

    Produs(const Produs &p);
    Produs& operator=(const Produs &p);


    friend istream &operator>>(istream &in, Produs &p);
    friend ostream &operator<<(ostream &out, const Produs &p);


    void produsulExpira(){
        expirat = true;
    }


};


#endif //POOLAB_PRODUS_H
