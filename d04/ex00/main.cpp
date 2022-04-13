#include "Animal.h"
#include "Cat.h"
#include "Dog.h"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "__________________________________" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << "__________________________________" << std::endl;
	delete i;
	delete j;
	delete meta;
	return 0;
}
