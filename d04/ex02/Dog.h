#ifndef INC_04_DOG_H
#define INC_04_DOG_H

#include "Animal.h"
#include "Brain.h"

class Dog: public Animal {
public:
	Dog();
	Dog(const Dog &src);
	Dog &operator = (const Dog &src);
	~Dog();
	virtual void makeSound() const;
	void setIdea(int index, std::string idea);
	std::string getIdea(int index);

private:
	Brain *brain;
};


#endif //INC_04_DOG_H
