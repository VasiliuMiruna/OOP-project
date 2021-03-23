//
// Created by Miruna on 3/18/2021.
//

#include "Varza.h"
Varza :: Varza(int nr_bucati)
{
    this->nr_bucati = nr_bucati;

}
Varza :: ~Varza()
{

}
Varza :: Varza(const Varza &v)
{
    this->nr_bucati = v.nr_bucati;
}

Varza Varza :: operator=(const Varza &v)
{
    this->nr_bucati = v.nr_bucati;
    return *this;
}