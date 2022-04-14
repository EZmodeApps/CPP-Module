#ifndef CPP_MODULE_03_FRAGTRAP_H
#define CPP_MODULE_03_FRAGTRAP_H

#include "ClapTrap.h"

class FragTrap: public ClapTrap {
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &src);
	FragTrap &operator = (const FragTrap &src);
	~FragTrap();

	void highFivesGuys(void);
};

#endif //CPP_MODULE_03_FRAGTRAP_H
