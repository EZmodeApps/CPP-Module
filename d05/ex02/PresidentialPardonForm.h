#ifndef D05_PRESIDENTIALPARDONFORM_H
#define D05_PRESIDENTIALPARDONFORM_H

#include "Form.h"

class PresidentialPardonForm: public Form {
public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &src);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &src);
	~PresidentialPardonForm();

	std::string getTarget() const;
	void execute(Bureaucrat const &executor) const;
	static const std::string &name;

	GradeTooHighException high;
	GradeTooLowException low;

private:
	std::string target;
};

std::ostream &operator<<(std::ostream &out, const PresidentialPardonForm &src);

#endif //D05_PRESIDENTIALPARDONFORM_H
