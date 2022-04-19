#include "PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5), target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src): Form(src) {
	target = src.getTarget();
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src) {
	Form::operator=(src);
	target = src.getTarget();
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

std::string PresidentialPardonForm::getTarget() const {
	return target;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	Form::execute(executor);
	std::cout << this->target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

std::ostream &operator<<(std::ostream &out, const PresidentialPardonForm &src) {
	out << "Presidential Pardon Form: " << src.getName() << "; " << "grade needed to sign: " << src.getSignedGrade() << "; "<< "grade needed to execute: " << src.getExecGrade() << "; " << "form is signed: " << src.isSigned() << "." << std::endl;
	return out;
}