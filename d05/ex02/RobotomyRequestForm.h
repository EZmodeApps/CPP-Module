#ifndef D05_ROBOTOMYREQUESTFORM_H
#define D05_ROBOTOMYREQUESTFORM_H

#include "Form.h"

class RobotomyRequestForm: public Form {
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &src);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &src);
	~RobotomyRequestForm();

	std::string getTarget() const;
	void execute(Bureaucrat const &executor) const;

	GradeTooHighException high;
	GradeTooLowException low;
	static const std::string &name;

private:
	std::string target;
};

std::ostream &operator<<(std::ostream &out, const RobotomyRequestForm &src);

#endif //D05_ROBOTOMYREQUESTFORM_H
