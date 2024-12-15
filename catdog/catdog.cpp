#include "catdog.h" 

CatDog::CatDog(string firstName, double weight, string breed, string conduct, bool isService, string dominant)
    : Dog(firstName, weight, breed, isService), Cat(firstName, weight, breed, conduct), _dominant(dominant) {}

CatDog::CatDog() : CatDog("не определено", 0.0, "не определено", "не определено", false, "не определено") {}

CatDog::~CatDog() {}

string CatDog::getDominant() {
    return _dominant;
}

void CatDog::setDominant(string dominant) {
    _dominant = dominant;
}

void CatDog::showInfo() {
    cout << "Имя: " << Dog::getFirstName() << endl; 
    cout << "Вес животного: " << Dog::getWeight() << " кг" << endl; 
    cout << "Порода животного: " << Dog::getBreed() << endl; 
    cout << "Является служебной собакой: " << (getIsService() ? "Да" : "Нет") << endl; 
    cout << "Поведение: " << Cat::getConduct() << endl; 
    cout << "Доминирующее поведение: " << _dominant << endl;
}