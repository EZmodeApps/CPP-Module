#include "Form.h"

Form::Form(std::string name, int signGrade, int execGrade): name(name), signGrade(signGrade), execGrade(execGrade) {
	this->_signed = false;
	if (execGrade > 150 || signGrade > 150)
		throw Form::high;
	else if (execGrade < 1 || signGrade < 1)
		throw Form::low;
}

Form::Form(const Form &src): name(src.getName()), _signed(src.getSigned()), signGrade(src.getSignedGrade()), execGrade(src.getExecGrade()) {}

Form &Form::operator=(const Form &src) {
	this->_signed = src.getSigned();
	return *this;
}

Form::~Form() {}

std::string Form::getName() const {
	return name;
}

std::string Form::isSigned() const {
	if (!_signed)
		return "no";
	else
		return "yes";
}

int Form::getSignedGrade() const {
	return signGrade;
}

int Form::getExecGrade() const {
	return execGrade;
}

bool Form::getSigned() const {
	return _signed;
}

bool Form::beSigned(Bureaucrat &src){
	if (src.getGrade() < 1)
		throw high;
	else if (src.getGrade() > 150)
		throw low;
	if (src.getGrade() >= getSignedGrade())
	{
		_signed = true;
		return true;
	}
	else
		throw low;
}

std::ostream &operator<<(std::ostream &out, const Form &src) {
	out << "Form: " << src.getName() << "; " << "grade needed to sign: " << src.getSignedGrade() << "; "<< "grade needed to execute: " << src.getExecGrade() << "; " << "form is signed: " << src.isSigned() << "." << std::endl;
	return out;
}