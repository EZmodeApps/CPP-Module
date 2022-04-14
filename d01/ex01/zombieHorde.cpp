#include "Zombie.h"

Zombie* zombieHorde(int N, std::string name)
{
	if (N <= 0)
	{
		std::cerr << "Error: wrong number!" << std::endl;
		return (NULL);
	}
	Zombie* horde = new Zombie[N];
	for (int i = 0; i < N; i++) {
		horde[i] = Zombie(name);
	}
	return (horde);
}


