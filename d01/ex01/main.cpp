#include "Zombie.h"

int main()
{
	int N = 10;
	std::string NAME = "Zombie";
	Zombie *zomb;

	zomb = zombieHorde(N, NAME);
	if (!zomb)
		return (1);
	for (int i = 0; i < N; i++)
		zomb[i].announce();
	delete [] zomb;
	return (0);
}
