#include "living-being.h"
#include <cmath>

LivingBeing::~LivingBeing() {}

LivingBeing::LivingBeing() : LivingBeing("не определено") {}

LivingBeing::LivingBeing(string firstName) : _firstName(firstName) {}

string LivingBeing::getFirstName() { return _firstName; }

void LivingBeing::setFirstName(string firstName) {
    this->_firstName = firstName;
}


void LivingBeing::showInfo() {
    cout << "Имя: " << _firstName << "\n";
}

