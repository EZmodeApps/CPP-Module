#ifndef INC_04_BRAIN_H
#define INC_04_BRAIN_H

#include "Animal.h"

class Brain {
public:
	Brain();
	Brain(const Brain &src);
	Brain &operator = (const Brain &src);
	~Brain();
	void setIdea(int index, std::string idea);
	std::string getIdea(int index);
private:
	std::string ideas[100];
};


#endif //INC_04_BRAIN_H
