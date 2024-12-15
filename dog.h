#pragma once
#include <iostream>
#include <string>
#include "animal.h"
using namespace std;

class Dog : virtual public Animal {
public:
    virtual ~Dog();

    Dog(string firstName, double weight, string breed, bool isService);
    Dog();
    Dog(bool isService);

    bool getIsService();
    
    void setIsService(bool isService);

    void showInfo();

private:
    bool _isService; 
};