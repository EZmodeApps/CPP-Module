#include "Cat.h"

Cat::Cat() {
	type = "Cat";
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

Cat::Cat(const Cat &src): Animal(src) {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

Cat &Cat::operator = (const Cat &src) {
	Animal::operator=(src);
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	return *this;
}

Cat::~Cat() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Meow." << std::endl;
}