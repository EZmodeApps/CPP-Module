#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
		{
			std::string arg(argv[i]);
			for (int j = 0; j < (int)arg.length(); j++)
			{
				if (arg[j] >= 'a' && arg[j] <= 'z')
					std::cout << (char)toupper(arg[j]);
				else
					std::cout << arg[j];
			}
		}
		std::cout << std::endl;
	}
	return (0);
}
