#include "Dog.h"

Dog::Dog() {
	type = "Dog";
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	brain = new Brain();
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
	delete brain;
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Woof woof!" << std::endl;
}

void Dog::setIdea(int index, std::string idea) {
	brain->setIdea(index, idea);
}

std::string Dog::getIdea(int index) {
	return brain->getIdea(index);
}