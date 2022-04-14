#include "ScavTrap.h"

ScavTrap::ScavTrap() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->damage = 20;
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	*this = src;
}

ScavTrap &ScavTrap::operator = (const ScavTrap &src) {
	this->name = src.name;
	this->hitPoints = src.hitPoints;
	this->damage = src.damage;
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

void ScavTrap::attack(const std::string &target) {
	if (this->energyPoints == 0 || this->hitPoints == 0)
		return ;
	this->energyPoints--;
	std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->damage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << name << " is now in Gate keeper mode." << std::endl;
}