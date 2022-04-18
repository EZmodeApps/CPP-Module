#include "PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5), target(target) {}

//PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src): target(src.getTarget()) {}
//
//PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src) {
//	this->target = src.getTarget();
//	return *this;
//}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	Form::execute(executor);
	std::cout << this->target << " has been pardoned by Zafod Beeblebrox." << std::endl;
//	return ;
}

std::ostream &operator<<(std::ostream &out, const PresidentialPardonForm &src) {
	out << "Presidential Pardon Form: " << src.getName() << "; " << "grade needed to sign: " << src.getSignedGrade() << "; "<< "grade needed to execute: " << src.getExecGrade() << "; " << "form is signed: " << src.isSigned() << "." << std::endl;
	return out;
}