#include "RobotomyRequestForm.h"

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequestForm", 72, 45), target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src): Form(src) {
	target = src.getTarget();
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src) {
	Form::operator=(src);
	this->target = src.getTarget();
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}


std::string RobotomyRequestForm::getTarget() const {
	return target;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	Form::execute(executor);
	std::cout << "* DRILLING NOISES *" << std::endl;
	std::cout << target << " was successfully robotomized 50% of the time.";
	std::cout << std::endl;
//	return ;
}

std::ostream &operator<<(std::ostream &out, const RobotomyRequestForm &src) {
	out << "Robotomy Request Form: " << src.getName() << "; " << "grade needed to sign: " << src.getSignedGrade() << "; "<< "grade needed to execute: " << src.getExecGrade() << "; " << "form is signed: " << src.isSigned() << "." << std::endl;
	return out;
}