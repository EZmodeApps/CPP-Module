#include "Animal.h"
#include "Cat.h"
#include "Dog.h"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "__________________________________" << std::endl;

	std::cout << j->getType() << "." << std::endl;
	std::cout << i->getType() << "." << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	std::cout << "__________________________________" << std::endl;

	Cat	cat;
	Dog	dog;

	std::cout << "__________________________________" << std::endl;

	cat.setIdea(0, "need to sleep.");
	std::cout << cat.getType() << ": "<< cat.getIdea(0) << std::endl;
	dog.setIdea(0, "need to eat.");
	std::cout << dog.getType() << ": "<< dog.getIdea(0) << std::endl;

	std::cout << "__________________________________" << std::endl;

	Animal *animals[10];
	for (int a = 0; a < 10; a++)
	{
		if (a % 2 == 0)
			animals[a] = new Cat();
		else
			animals[a] = new Dog();
	}
	for (int a = 0; a < 10; a++)
		delete animals[a];
	delete j;
	delete i;
	delete meta;
}
