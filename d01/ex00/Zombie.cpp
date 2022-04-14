#include "Zombie.h"

Zombie::Zombie(void) {}

Zombie::~Zombie(void) {}

Zombie::Zombie(std::string name) {
	this->name = name;
}

void Zombie::announce(void) {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}