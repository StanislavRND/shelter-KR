#include "dog.h" 


Dog::~Dog() {}

Dog::Dog(string firstName, double weight, string breed, bool isService)
    : Animal(firstName, weight, breed), _isService(isService) {}

Dog::Dog() : Dog("не определено", 0.0, "не определено", false) {}

Dog::Dog(bool isService) : Animal("не определено", 0.0, "не определено"), _isService(isService) {}

bool Dog::getIsService() {
    return _isService;
}

void Dog::setIsService(bool isService) {
    _isService = isService;
}

void Dog::showInfo() {
    Animal::showInfo();
    cout << "Является служебной собакой: " << (_isService ? "Да" : "Нет") << endl;
}