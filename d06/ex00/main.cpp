//если 1 символ то проверить на чар; если не 1 символ то проверить на inf, nanf; в остальных случаях stof

#include "Convert.h"

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cerr << "Error: no argument!" << std::endl;
		return (1);
	}
	Convert convert;
	try {
		convert.convertStr(argv[1]);
		convert.printValue();
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}