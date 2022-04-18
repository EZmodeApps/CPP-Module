#ifndef D05_SHRUBBERYCREATIONFORM_H
#define D05_SHRUBBERYCREATIONFORM_H

#include "Form.h"

class ShrubberyCreationForm: public Form {
public:
	ShrubberyCreationForm(std::string target);
	//ShrubberyCreationForm(const ShrubberyCreationForm &src);
	//ShrubberyCreationForm &operator=(const ShrubberyCreationForm &src);
	virtual ~ShrubberyCreationForm();

//	std::string getTarget() const;
	std::string getTarget() const;
	void execute(Bureaucrat const &executor) const;

	GradeTooHighException high;
	GradeTooLowException low;
	static const std::string &name;

private:
	std::string target;
};

std::ostream &operator<<(std::ostream &out, const ShrubberyCreationForm &src);

#endif //D05_SHRUBBERYCREATIONFORM_H
