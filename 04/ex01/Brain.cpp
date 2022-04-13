#include "Brain.h"

Brain::Brain() {}

Brain::Brain(const Brain &src) {
	*this = src;
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

Brain &Brain::operator = (const Brain &src) {
	for (int i = 0; i < 100; i++)
		ideas[i] = src.ideas[i];
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	return *this;
}

Brain::~Brain() {}

void Brain::setIdea(int index, std::string idea) {
	ideas[index] = idea;
}

std::string Brain::getIdea(int index) {
	return ideas[index];
}
