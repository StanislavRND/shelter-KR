#include "cat.h" 


Cat::~Cat() {}

Cat::Cat(string firstName, double weight, string breed, string conduct)
    : Animal(firstName, weight, breed), _conduct(conduct) {}

Cat::Cat() : Cat("не определено", 0.0, "не определено", "не определено") {}

Cat::Cat(string conduct) : Animal("не определено", 0.0, "не определено"), _conduct(conduct) {}

string Cat::getConduct() {
    return _conduct;
}

void Cat::setConduct(string conduct) {
    _conduct = conduct;
}

void Cat::showInfo() {
    Animal::showInfo();
    cout << "Поведение: " << _conduct << endl;
}