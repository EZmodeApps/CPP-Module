#include "Dog.h"

Dog::Dog() {
	type = "Dog";
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

Dog::Dog(const Dog &src): Animal(src) {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

Dog &Dog::operator = (const Dog &src) {
	Animal::operator=(src);
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	return *this;
}

Dog::~Dog() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Woof woof!" << std::endl;
}