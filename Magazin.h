//
// Created by Miruna on 3/18/2021.
//

#ifndef POOLAB_MAGAZIN_H
#define POOLAB_MAGAZIN_H

#include <iostream>
#include <string>
#include "Produs.h"
#include "Vin.h"

class Magazin {

    // levenshtein - pt distanta de maxim 3-4 ar trebui sa gasesti un subsir similar cu cuvintele din "search string" introdus de user
    //  vin alb de soi <- punctaj
    //  vin rosu

    ///Produs **produs;
    Produs *produs;
    int nr_produse;
    double buget;
    //int nr_produse_curent = 0;
    ///static produse
   // Vin *vin;
    friend class Vin;
    friend class Faina;
    friend class Bere;
    friend class Cartofi;
    friend class Jucarii;
    friend class Varza;
    friend class Produs;
    static int nr_total_prod;

public:
    ///constructori si destructori
    Magazin(){};
    Magazin(int, double);
    ~Magazin();

    ///constructor copiere
    Magazin(const Magazin &p);

    ///getteri
   ///getter pentru produse
   Produs getProdus(int i)const{return produs[i];}
   int getNr_produse()const{return nr_produse;}
   double getBuget()const{return buget;}

   ///setteri

   ///set produse
   void setNr_produse(int nr_produse){this->nr_produse = nr_produse;}
   void setBuget(int buget){this->buget = buget;}


   ///operator =
   Magazin& operator=(const Magazin &p);

   ///operator indexare
   Produs& operator[](int);

   void introduProdus(Produs p) ;
   void stergeProdus();

   void afiseazaToateProdusele(){
       for(int i = 0; i < nr_produse; i++)
           cout << produs[i];
   }


};


#endif //POOLAB_MAGAZIN_H
