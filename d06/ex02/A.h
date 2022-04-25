#ifndef D06_A_H
#define D06_A_H

#include "Base.h"

class A: public Base {
public:
	A() {
		std::cout << "Constructor A called." << std::endl;
	}
};

#endif //D06_A_H
