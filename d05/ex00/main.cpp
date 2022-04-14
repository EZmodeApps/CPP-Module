#include "Bureaucrat.h"

int main () {
	Bureaucrat b("Jack",149);

	try {
		b.decGrade();
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "Current grade is " << b.getGrade() << std::endl;
	try {
		b.decGrade();
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
