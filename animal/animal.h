#pragma once
#include <iostream>
#include <string>
#include "living-being.h"
using namespace std;


class Animal : public LivingBeing {
public:

    ~Animal();
    
    Animal(string firstName, double weight, string breed);
    Animal();
    Animal(double weight, string breed);
    
    double getWeight();
    void setWeight(double weight);
    
    string getBreed();
    void setBreed(string breed);
    
    void showInfo();

private:
    double _weight;
    string _breed;
};