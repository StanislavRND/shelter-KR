#pragma once
#include <iostream>
#include <string>
#include "employee.h"
using namespace std;

class Shelter : public Employee {
public:
    virtual ~Shelter();

    Shelter(string firstName, string surname, double salary, int quantityAnimalsControl);
    Shelter();
    Shelter(int quantityAnimalsControl);

    int getQuantityAnimalsControl();
    
    void setQuantityAnimalsControl(int quantityAnimalsControl);

    void showInfo();

private:
    int _quantityAnimalsControl; 
};

