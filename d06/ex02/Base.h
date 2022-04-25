#ifndef D06_BASE_H
#define D06_BASE_H

#include <iostream>

class Base {
public:
	virtual ~Base() {
		std::cout << "Destructor called." << std::endl;
	}
};


#endif //D06_BASE_H
