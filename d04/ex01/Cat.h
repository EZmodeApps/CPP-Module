#ifndef INC_04_CAT_H
#define INC_04_CAT_H

#include "Animal.h"
#include "Brain.h"

class Cat: public Animal {
public:
	Cat();
	Cat(const Cat &src);
	Cat &operator = (const Cat &src);
	~Cat();
	virtual void makeSound() const;
	void setIdea(int index, std::string idea);
	std::string getIdea(int index);


private:
	Brain *brain;
};


#endif //INC_04_CAT_H
