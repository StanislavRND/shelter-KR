#pragma once
#include <iostream>
#include <string>
#include "animal.h"
using namespace std;

class Cat : virtual public Animal {
public:
    virtual ~Cat();

    Cat(string firstName, double weight, string breed, string conduct);
    Cat();
    Cat(string conduct);

    string getConduct();
    
    void setConduct(string conduct);

    void showInfo();

private:
    string _conduct; 
};

