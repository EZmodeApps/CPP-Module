#ifndef INC_04_DOG_H
#define INC_04_DOG_H

#include "Animal.h"

class Dog: public Animal {
public:
	Dog();
	Dog(const Dog &src);
	Dog &operator = (const Dog &src);
	~Dog();
	virtual void makeSound() const;
};


#endif //INC_04_DOG_H
