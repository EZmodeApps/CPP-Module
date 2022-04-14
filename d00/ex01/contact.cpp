#include "contact.hpp"

Contact::Contact() : id(0)  {}

Contact::~Contact() {}


void	Contact::showContacts()
{
	std::cout << "|" << std::setw(10) << id;
	for (int i = 0; i < 3; i++)
	{
		if (info[i].length() > 10)
			std::cout << "|" << info[i].substr(0, 9) << ".";
		else
			std::cout << "|" << std::setw(10) << info[i];
	}
	std::cout << "|" << std::endl;
}

void Contact::showContact()
{
	for (int i = 0; i <= 4; i++) {
		if (i == 0)
			std::cout << "Name:           " << info[i] << std::endl;
		if (i == 1)
			std::cout << "Last name:      " << info[i] << std::endl;
		if (i == 2)
			std::cout << "Nickname:       " << info[i] << std::endl;
		if (i == 3)
			std::cout << "Phone number:   " << info[i] << std::endl;
		if (i == 4)
			std::cout << "Darkest secret: " << info[i] << std::endl;
	}
}

bool Contact::setContact(int index) {
		id = index;
	for (int i = 0; i <= 4; i++)
	{
		if (i == 0)
		{
			std::cout << "Enter name: ";
			std::getline(std::cin, info[i]);
		}
		if (i == 1)
		{
			std::cout << "Enter last name: ";
			std::getline(std::cin, info[i]);
		}
		if (i == 2)
		{
			std::cout << "Enter nickname: ";
			std::getline(std::cin, info[i]);
		}
		if (i == 3)
		{
			std::cout << "Enter phone number: ";
			std::getline(std::cin, info[i]);
		}
		if (i == 4)
		{
			std::cout << "Enter darkest secret: ";
			std::getline(std::cin, info[i]);
		}
		if (info[i].empty() == 1)
			return (false);
	}
	return (true);
}
