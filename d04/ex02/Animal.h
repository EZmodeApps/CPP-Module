#ifndef INC_04_ANIMAL_H
#define INC_04_ANIMAL_H

#include <iostream>

class Animal {
public:
	Animal();
	Animal(const Animal &src);
	Animal &operator = (const Animal &src);
	virtual ~Animal();

	virtual void makeSound() const = 0;
	std::string getType() const;
protected:
	std::string type;
};


#endif //INC_04_ANIMAL_H
