#pragma once
#include <iostream>
#include <string>
#include "living-being.h"
using namespace std;


class Employee : public LivingBeing {
public:
    ~Employee();

    Employee(string firstName, string surname, double salary);
    Employee();
    Employee(string surname, double salary);
    
    string getSurname();
    void setSurname(string surname);
    
    double getSalary();
    void setSalary(double salary);
    
    void showInfo();

private:
    string _surname;
    double _salary; 
};