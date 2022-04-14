#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <string>
#include "contact.hpp"

class phonebook {

public:
	phonebook();
	~phonebook();
	void add_contact();
	void search();

private:
	int amount;
	int index;
	Contact contacts[8];
};



#endif
