#ifndef D06_C_H
#define D06_C_H

#include "Base.h"

class C: public Base {
public:
	C() {
		std::cout << "Constructor C called." << std::endl;
	}
};

#endif //D06_C_H
