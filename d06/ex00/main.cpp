#include "Convert.h"

int main(int argc, char **argv)
{
	if (argc < 2) {
		std::cerr << "Error: no argument!" << std::endl;
		return 1;
	}
	Convert convert;
	try {
		convert.convertStr(argv[1]);
		convert.printAll();
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}