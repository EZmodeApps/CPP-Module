#ifndef D06_B_H
#define D06_B_H

#include "Base.h"

class B: public Base {
public:
	B() {
		std::cout << "Constructor B called." << std::endl;
	}
};

#endif //D06_B_H
