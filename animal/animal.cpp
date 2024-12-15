#include <cmath>
#include "animal.h"

Animal::~Animal() {}

Animal::Animal(string firstName, double weight, string breed)
    : LivingBeing(firstName), _weight(weight), _breed(breed) {}

Animal::Animal() : Animal("не определено", 0.0, "не определено") {}


Animal::Animal(double weight, string breed)
    : _weight(weight), _breed(breed) {}


double Animal::getWeight() {
    return _weight;
}

void Animal::setWeight(double weight) {
    this->_weight = weight;
}

string Animal::getBreed() {
    return _breed;
}

void Animal::setBreed(string breed) {
    this->_breed = breed;
}


void Animal::showInfo() {
    LivingBeing::showInfo();
    cout << "Вес животного: " << _weight << " кг" << endl;
    cout << "Порода животного: " << _breed << endl;
}