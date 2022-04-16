#ifndef D05_FORM_H
#define D05_FORM_H

#include "Bureaucrat.h"

class Bureaucrat;

class Form {
public:
	Form(std::string name, int signGrade, int execGrade);
	Form(const Form &src);
	Form &operator=(const Form &src);
	~Form();

	std::string getName() const;
	std::string isSigned() const;
	int getSignedGrade() const;
	int getExecGrade() const;
	bool getSigned() const;
	bool beSigned(Bureaucrat &src);

	GradeTooHighException high;
	GradeTooLowException low;

private:
	const std::string name;
	bool _signed;
	const int signGrade;
	const int execGrade;
};

std::ostream &operator<<(std::ostream &out, const Form &src);

#endif //D05_FORM_H
