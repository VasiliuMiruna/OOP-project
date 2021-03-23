//
// Created by Miruna on 3/18/2021.
//

#include "Produs.h"
using namespace std;

Produs::Produs(string nume, int pret, bool stoc, double cant, string unit_mas, bool expirat)
{
    //ctor
    this->nume = nume;
    this->pret = pret;
    this->stoc = stoc;
    this->cant = cant;
    this->unit_mas = unit_mas;
    this->expirat = expirat;
    nr_total_produse++;
}


Produs::~Produs()
{
    nume.erase();
    nr_total_produse--;
}

Produs::Produs(const Produs &p)
{
    this->nume = p.nume;
    this->pret = p.pret;

}
Produs& Produs :: operator=(const Produs &p)
{
    this-> nume = p.nume;
    this->pret = p.pret;
    return *this;
}

istream &operator>>(istream &in, Produs &p){
    cout << "Introdu nume: ";
    cin >> p.nume;
    cout << "Introdu pret: ";
    cin >> p.pret;
}

ostream &operator<<(ostream &out, const Produs &p){
    cout << "nume: " << p.nume <<"\n Pret: " << p.pret << "\n" << "expirat: " << p.expirat <<endl;
}

int Produs :: nr_total_produse;