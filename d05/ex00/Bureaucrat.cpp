#include "Bureaucrat.h"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string name, int grade): name(name) {
	if (grade < 0)
		throw low;
	if (grade > 150)
		throw high;
	else
		this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) {
	*this = src;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src) {
	grade = src.grade;
	return *this;
}

Bureaucrat::~Bureaucrat() {}

int Bureaucrat::getGrade() {
	return grade;
}

std::string Bureaucrat::getName() {
	return name;
}

void Bureaucrat::decGrade() {
	if (this->grade == 150)
		throw low;
	else
		this->grade++;
}

void Bureaucrat::incGrade() {
	if (this->grade == 0)
		throw high;
	else
		this->grade--;
}

