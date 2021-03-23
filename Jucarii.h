//
// Created by Miruna on 3/18/2021.
//

#ifndef POOLAB_JUCARII_H
#define POOLAB_JUCARII_H

#include <iostream>
#include<string>

using namespace std;



class Jucarii {
    int cant;
    char* nume;
    char sex;
    bool baterii;
public:
    ///constr si destr
    Jucarii(){};
    Jucarii(int, char*, char, bool);
    ~Jucarii();

    Jucarii(const Jucarii &j);

    ///getteri
    int getCant()const{return cant;}
    char* getNume()const{return nume;}
    char getSex()const{return sex;}
    bool getBaterii()const{return baterii;}

    ///setteri
    void setCant(int cant){this->cant = cant;}
    void setNume(char* nume){this->nume = nume;}
    void setSex(char sex){this->sex = sex;}
    void setBaterii(bool baterii){this->baterii = baterii;}


    Jucarii operator=(const Jucarii &j);

};


#endif //POOLAB_JUCARII_H
