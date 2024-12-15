#include "veterinarian.h"

Veterinarian::~Veterinarian() {}

Veterinarian::Veterinarian(string firstName, string surname, double salary, int quantityAnimalsCured)
    : Employee(firstName, surname, salary), _quantityAnimalsCured(quantityAnimalsCured) {}

Veterinarian::Veterinarian() : Veterinarian("не определено", "не определено", 0.0, 0) {}

Veterinarian::Veterinarian(int quantityAnimalsCured) 
    : Employee("не определено", "не определено", 0.0), _quantityAnimalsCured(quantityAnimalsCured) {}

int Veterinarian::getQuantityAnimalsCured() {
    return _quantityAnimalsCured;
}

void Veterinarian::setQuantityAnimalsCured(int quantityAnimalsCured) {
    _quantityAnimalsCured = quantityAnimalsCured;
}

void Veterinarian::showInfo() {
    Employee::showInfo();
    cout << "Количество вылеченных животных: " << _quantityAnimalsCured << endl;
}