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

int Bureaucrat::getGrade() const {
	return grade;
}

std::string Bureaucrat::getName() const {
	return name;
}

void Bureaucrat::decGrade() {
	if (this->grade == 150)
		throw low;
	else
		this->grade++;
}

void Bureaucrat::incGrade() {
	if (this->grade == 1)
		throw high;
	else
		this->grade--;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &src) {
	out << "Bureaucrat " << src.getName() << ", grade is " << src.getGrade() << ".";
	return out;
}