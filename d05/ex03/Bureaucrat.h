#ifndef D05_BUREAUCRAT_H
#define D05_BUREAUCRAT_H

#include <iostream>
#include <exception>
#include <string>
#include "GradeTooHighException.h"
#include "GradeTooLowException.h"
#include "Form.h"
#include <fstream>

class Form;

class Bureaucrat {
public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &src);
	Bureaucrat &operator=(const Bureaucrat &src);
	~Bureaucrat();

	int getGrade() const;
	std::string getName() const;
	void incGrade();
	void decGrade();
	void signForm(Form &src);
	void executeForm(Form const & form);

	GradeTooHighException high;
	GradeTooLowException low;

private:
	const std::string name;
	int grade;
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &src);

#endif //D05_BUREAUCRAT_H
