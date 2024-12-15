#pragma once
#include <iostream>
#include <string>
using namespace std;

class LivingBeing {
public:
    virtual ~LivingBeing();

    LivingBeing(string firstName);
    LivingBeing();

    string getFirstName();

    void setFirstName(string firstName);
    
    virtual void showInfo();
    
private:
    string _firstName; 
};



