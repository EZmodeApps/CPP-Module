#include "Bureaucrat.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "Intern.h"

int main() {

	Intern intern;
	Form *forms[4];
	std::string formTypes[4] = { "shrubbery creation", "robotomy request", "presidential pardon", "dfggrf"};

	for (int i = 0; i < 4; i++)
		forms[i] = intern.makeForm(formTypes[i], "TARGET");

	std::cout << "\n";

	Bureaucrat John("John", 1);
	for (int i = 0; i < 3; i++) {

		John.signForm(*forms[i]);
		John.executeForm(*forms[i]);
	}

	for (int i = 0; i < 4; i++)
		delete forms[i];

	return 0;
}
