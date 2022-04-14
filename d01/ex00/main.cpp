#include "Zombie.h"

int main() {
	std::cout << "Zombies made with static memory allocation:\n";
	for (int i = 0; i < 10; i++)
		randomChump("Stack");
	std::cout << "\nZombies made with dynamic memory allocation:\n";
	Zombie *din;
	for (int i = 0; i < 5; i++)
	{
		din = newZombie("Heap");
		din->announce();
		delete din;
	}
	return(0);
}

