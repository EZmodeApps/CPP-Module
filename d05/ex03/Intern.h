#ifndef D05_INTERN_H
#define D05_INTERN_H

#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"

class Form;

class Intern {

public:
	Intern();
	Intern (const Intern &src);
	Intern &operator = (const Intern &src);
	~Intern();

	Form *makeForm(std::string formType, std::string target);

	class formException : public std::exception {
	private:
		const char *error;
	public:
		formException() {
			error = "Intern can't make an unknown form!";
		};
		virtual const char* what() const throw()
		{
			return error;
		};
	};
};

#endif //D05_INTERN_H
