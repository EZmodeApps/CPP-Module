#include "Bureaucrat.h"
#include "Intern.h"

int main() {

	Intern intern;
	Form *forms[4];
	std::string formTypes[4] = { "shrubbery creation", "robotomy request", "presidential pardon", "random"};

	for (int i = 0; i < 4; i++)
		forms[i] = intern.makeForm(formTypes[i], "TARGET");
	std::cout << "\n";
	Bureaucrat b("Jim", 1);
	for (int i = 0; i < 3; i++) {
		b.signForm(*forms[i]);
		b.executeForm(*forms[i]);
		std::cout << "\n";
	}
	for (int i = 0; i < 4; i++)
		delete forms[i];
	return 0;
}
