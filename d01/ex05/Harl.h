#ifndef CPP_MODULE_01_HARL_H
#define CPP_MODULE_01_HARL_H

#include <iostream>

class Harl {

public:
	Harl();
	~Harl();
	void complain(std::string level);

private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

};


#endif
