#include "Bureaucrat.h"

int main () {
	Bureaucrat a("Jim", 42);
	Bureaucrat b("Jack",149);
	Bureaucrat c("John", 1);

	std::cout << a <<std::endl;
	std::cout << b <<std::endl;
	std::cout << c << std::endl;

	std::cout << "\n\nAttempt to increase bureaucrat's grade:" << std::endl;
	try {
		b.incGrade();
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << b << std::endl;
	std::cout << "Attempt to decrease bureaucrat's grade:" << std::endl;
	try {
		b.decGrade();
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << b << std::endl;
	std::cout << "Attempt to decrease bureaucrat's grade:" << std::endl;
	try {
		b.decGrade();
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << b << std::endl;
	std::cout << "\n\nHere will be the exception:" << std::endl;
	std::cout << b << std::endl;
	std::cout << "Attempt to decrease bureaucrat's grade:" << std::endl;
	try {
		b.decGrade();
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "Here will be the exception:" << std::endl;
	std::cout << c << std::endl;
	std::cout << "Attempt to increase bureaucrat's grade:" << std::endl;
	try {
		c.incGrade();
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
