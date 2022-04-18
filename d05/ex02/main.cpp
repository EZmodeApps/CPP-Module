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

	ShrubberyCreationForm sForm("home");
	try
	{
		sForm.beSigned(b);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	b.signForm(sForm);
	sForm.execute(b);
	std::cout << sForm.getSigned() << "\n";

	RobotomyRequestForm rForm("R2D2");
	a.signForm(rForm);
	rForm.execute(a);

	PresidentialPardonForm pForm("abba");
	a.signForm(pForm);
	a.executeForm(pForm);
	std::cout << pForm.getSigned() << "\n";

	PresidentialPardonForm* pfForm = new PresidentialPardonForm("abchihcba");
	PresidentialPardonForm& pfFormRef = *pfForm;
	b.signForm(pfFormRef);
	b.executeForm(pfFormRef);
	std::cout << pfFormRef << std::endl;
	return (0);
}
