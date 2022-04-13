#include "Animal.h"

Animal::Animal() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

Animal::Animal(const Animal &src) {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	*this = src;
}

Animal &Animal::operator = (const Animal &src) {
	this->type = src.type;
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	return *this;
}

Animal::~Animal() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

//void Animal::makeSound() const {
//	std::cout << "Animal makes some kind of sound." << std::endl;
//}

std::string Animal::getType() const {
	return type;
}