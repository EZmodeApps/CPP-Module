#include "FragTrap.h"

FragTrap::FragTrap() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name) {
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->damage = 30;
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	*this = src;
}

FragTrap &FragTrap::operator = (const FragTrap &src) {
	this->name = src.name;
	this->hitPoints = src.hitPoints;
	this->damage = src.damage;
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << this->name << " requests a high five!" << std::endl;
}