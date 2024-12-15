#pragma once
#include <iostream>
#include <string>
#include "animal.h"
#include "cat.h"
#include "dog.h"
using namespace std;

class CatDog : public Dog, public Cat {
public:
    CatDog(string firstName, double weight, string breed, string conduct, bool isService, string dominant);
    CatDog();
    ~CatDog();

    string getDominant() ;
    void setDominant(string dominant);
    void showInfo() ;

private:
    string _dominant; 
};