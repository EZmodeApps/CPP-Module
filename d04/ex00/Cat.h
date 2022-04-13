#ifndef INC_04_CAT_H
#define INC_04_CAT_H

#include "Animal.h"

class Cat: public Animal {
public:
	Cat();
	Cat(const Cat &src);
	Cat &operator = (const Cat &src);
	~Cat();
	virtual void makeSound() const;
};


#endif //INC_04_CAT_H
