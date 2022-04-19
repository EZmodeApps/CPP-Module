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

void Bureaucrat::signForm(Form &src) {
	try {
		src.beSigned(*this);
	}
	catch (std::exception &e)
	{
		std::cout << this->getName() << " couldn't sign form " << src.getName() << " because: " << e.what() << std::endl;
		return ;
	}
	std::cout << this->getName() << " signed " << src.getName() << "." << std::endl;
}

void	Bureaucrat::executeForm(Form const & form) {
	try
	{
		form.execute(*this);
	}
	catch (const std::exception &e)
	{
		std::cout << "Bureaucrat " << name << " couldn't execute the form because: " << e.what() << std::endl;
		return ;
	}
	std::cout << name << " executes " << form << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &src) {
	out << "Bureaucrat " << src.getName() << ", grade is " << src.getGrade() << ".";
	return out;
}