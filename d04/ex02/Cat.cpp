#include "Cat.h"

Cat::Cat() {
	type = "Cat";
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	brain = new Brain();
}

//Cat::Cat(std::string name)

Cat::Cat(const Cat &src): Animal(src) {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

Cat &Cat::operator = (const Cat &src) {
	Animal::operator=(src);
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	return *this;
}

Cat::~Cat() {
	delete brain;
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Meow." << std::endl;
}

void Cat::setIdea(int index, std::string idea) {
	brain->setIdea(index, idea);
}

std::string Cat::getIdea(int index) {
	return brain->getIdea(index);
}