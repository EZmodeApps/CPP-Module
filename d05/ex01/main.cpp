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
	std::cout << "\n\n" << std::endl;
	std::cout << "Form tests:" << std::endl;
	std::cout << a <<std::endl;
	std::cout << b <<std::endl;
	std::cout << c << std::endl;
	Form form_1("Uniform", 18, 10);
	std::cout << form_1;
	a.signForm(form_1);
	b.signForm(form_1);
	c.signForm(form_1);
	std::cout << form_1;
	return (0);
}
