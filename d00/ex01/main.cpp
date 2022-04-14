#include "phonebook.hpp"

int	main()
{
	std::string input;
	phonebook ph;
	bool run = true;

	while (run)
	{
		std::cout << "Please enter your command:" << std::endl;
		std::getline(std::cin, input);
		if (input == "ADD" || input == "add")
			ph.add_contact();
		if (input == "SEARCH" || input == "search")
			ph.search();
		if (input == "EXIT" || input == "exit")
			run = false;
	}
	return (0);
}

