#ifndef D05_FORM_H
#define D05_FORM_H

#include "Bureaucrat.h"

class Bureaucrat;

class Form {
public:
	Form();
	Form(std::string name, int signGrade, int execGrade);
	Form(const Form &src);
	//Form &operator=(const Form &src);
	virtual ~Form();

	virtual std::string getName() const;
	virtual std::string isSigned() const;
	virtual int getSignedGrade() const;
	virtual int getExecGrade() const;
	virtual bool getSigned() const;
	virtual bool beSigned(Bureaucrat &src);
	virtual void execute(Bureaucrat const &src) const = 0;

	class UnsignedFormException: public std::exception {
		virtual const char* what() const throw();
	};

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
