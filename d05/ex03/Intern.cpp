#include "Intern.h"

Intern::Intern() {}

Intern::Intern(const Intern &src) {
	(void)src;
}

Intern &Intern::operator = (const Intern &src) {
	(void)src;
	return *this;
};

Intern::~Intern() {}

Form *Intern::makeForm(std::string formType, std::string target) {

	std::string formTypes[3] = { "shrubbery creation",\
									"robotomy request",\
									"presidential pardon" };
	Form *forms[3] = { new ShrubberyCreationForm(target),\
						new RobotomyRequestForm(target),\
					   new PresidentialPardonForm(target)};
	int i = 0;
		try {
			while (i < 3) {
				if (formTypes[i] == formType)
					break;
				i++;
			}
			if (i == 3)
				throw formException();
		}
		catch (std::exception &e) {
			for (int j = 0; j < 3; j++) {
				delete forms[j];
			}
			std::cerr << "Exception: Intern can't make an unknown form!" << std::endl;
			return nullptr;
		}
		std::cout << "Intern creates " << formType << " form." << std::endl;
	for (int j = 0; j < 3; j++) {
		if (j != i)
			delete forms[j];
	}
	return forms[i];
}