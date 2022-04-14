#include "ClapTrap.h"

ClapTrap::ClapTrap() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

ClapTrap::ClapTrap(std::string name): name(name), hitPoints(10), energyPoints(10), damage(0) {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src) {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	*this = src;
}

ClapTrap &ClapTrap::operator = (const ClapTrap &src) {
	this->name = src.name;
	this->hitPoints = src.hitPoints;
	this->damage = src.damage;
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

void ClapTrap::attack(const std::string &target) {
	if (this->energyPoints == 0 || this->hitPoints == 0)
		return ;
	this->energyPoints--;
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->hitPoints -= amount;
	std::cout << "ClapTrap " << this->name << " took " << amount << " points of damage, current health is " << this->hitPoints << "."  << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->energyPoints == 0 || this->hitPoints == 0)
		return ;
	this->energyPoints--;
	this->hitPoints += amount;
	std::cout << "ClapTrap " << this->name << " repaired itself by " << amount << " hit points, current health is " << this->hitPoints << "." << std::endl;
}