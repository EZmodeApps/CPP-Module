#ifndef CPP_MODULE_01_ZOMBIE_H
#define CPP_MODULE_01_ZOMBIE_H

#include <string>
#include <iostream>

class Zombie {

public:
	Zombie(void);
	~Zombie(void);
	Zombie(std::string name);
	void announce(void);

private:
	std::string name;
};

Zombie*	newZombie(std::string name);
void randomChump(std::string name);

#endif
