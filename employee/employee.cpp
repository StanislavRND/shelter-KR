#include <cmath>
#include "employee.h"

Employee::~Employee() {}


Employee::Employee(string firstName, string surname, double salary)
    : LivingBeing(firstName), _surname(surname), _salary(salary) {}

Employee::Employee() : Employee("не определено", "не определено", 0.0) {}


Employee::Employee(string surname, double salary)
    : LivingBeing("не определено"), _surname(surname), _salary(salary) {}


string Employee::getSurname() {
    return _surname;
}

void Employee::setSurname(string surname) {
    this->_surname = surname;
}

double Employee::getSalary() {
    return _salary;
}

void Employee::setSalary(double salary) {
    this->_salary = salary; 
}

void Employee::showInfo() {
    LivingBeing::showInfo();
    cout << "Фамилия: " << _surname << endl;
    cout << "Зарплата: " << _salary << endl;
}