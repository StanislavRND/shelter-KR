#pragma once
#include <iostream>
#include <string>
#include "employee.h"
using namespace std;

class Veterinarian : public Employee {
public:
    virtual ~Veterinarian();

    Veterinarian(string firstName, string surname, double salary, int quantityAnimalsCured);
    Veterinarian();
    Veterinarian(int quantityAnimalsCured);

    int getQuantityAnimalsCured();
    
    void setQuantityAnimalsCured(int quantityAnimalsCured);

    void showInfo();

private:
    int _quantityAnimalsCured; 
};