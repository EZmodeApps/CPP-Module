#include "Bureaucrat.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"

int main () {
	Bureaucrat a("Jim", 42);
	Bureaucrat b("Jack",149);
	Bureaucrat c("John", 1);

	std::cout << a <<std::endl;
	std::cout << b <<std::endl;
	std::cout << c << std::endl;

	ShrubberyCreationForm sForm("shrub");
	try {
		sForm.beSigned(b);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	b.signForm(sForm);
	try {
		sForm.execute(b);
	}
	catch(const std::exception& e) {
		std::cout << "Bureaucrat " << b.getName() << " couldn't execute the form because: " << e.what() << std::endl;
	}
	std::cout << sForm;

	RobotomyRequestForm rForm("robot");
	a.signForm(rForm);
	rForm.execute(a);
	std::cout << rForm << std::endl;

	PresidentialPardonForm pForm("president");
	a.signForm(pForm);
	a.executeForm(pForm);
	std::cout << pForm << std::endl;

	PresidentialPardonForm* pfForm = new PresidentialPardonForm("abcdef");
	PresidentialPardonForm& pfFormRef = *pfForm;
	b.signForm(pfFormRef);
	b.executeForm(pfFormRef);
	std::cout << pfFormRef << std::endl;
	delete pfForm;
	return (0);
}
