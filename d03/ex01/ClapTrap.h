#ifndef CPP_MODULE_03_CLAPTRAP_H
#define CPP_MODULE_03_CLAPTRAP_H

#include <iostream>
#include <string>

class ClapTrap {

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &src);
	ClapTrap &operator = (const ClapTrap &src);
	~ClapTrap();

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

protected:
	std::string name;
	unsigned int hitPoints;
	unsigned int energyPoints;
	unsigned int damage;
};


#endif //CPP_MODULE_03_CLAPTRAP_H
