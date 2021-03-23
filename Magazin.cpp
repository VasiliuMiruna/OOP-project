//
// Created by Miruna on 3/18/2021.
//

#include "Magazin.h"
#include "Produs.h"

Magazin :: Magazin(int nr_produse, double buget)
{
    this ->nr_produse = nr_produse;
    this->buget = buget;


}
Magazin::~Magazin()
{

}

Magazin :: Magazin(const Magazin &m)
{

    produs = new Produs[1001];


//    this->produs = new Produs [m.nr_produse];
//    for(int i = 0; i< nr_produse; i++){
//
//       Produs *p_copy;
//       p_copy = new Produs(*m.produs[i]);
//       this->produs[i] = p_copy;
//
//    }
//    this->nr_produse
//
//
//
//
//
//
//    = p.nr_produse;
//    this->buget = p.buget;
}

Magazin &Magazin :: operator=(const Magazin &p)
{
    int i;
    for(i = 0; i< nr_produse; i++)
        produs[i] = p.produs[i];
    this->nr_produse = p.nr_produse;
    this->buget = p.buget;
    return *this;
}

Produs& Magazin::operator[](int index)
{
    return produs[index];
}

void Magazin :: introduProdus(Produs p)
{
//    if(nr_produse == nr_produse) {cout <<"Capacitate maxima atinsa"; return;}
//
//    Produs *p2 = new Produs(*p);
//    this->produs[nr_produse++] = p2;

    nr_produse++;
    produs[nr_produse] = p;

}
void Magazin ::stergeProdus() {

    nr_produse--;
}