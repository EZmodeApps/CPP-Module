#include "ShrubberyCreationForm.h"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreationForm", 145, 137), target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src): Form(src) {
	target = src.getTarget();
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src) {
	Form::operator=(src);
	this->target = src.getTarget();
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

std::string ShrubberyCreationForm::getTarget() const {
	return this->target;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	std::ofstream file;

	file.open(std::string(this->getTarget() + "_shrubbery").c_str(),
			  std::ios::out | std::ios::app);
	if(file.is_open())
	{
		file << "          .     .  .      +     .      .          ." << std::endl;
		file << "     .       .      .     #       .           ." << std::endl;
		file << "        .      .         ###            .      .      ." << std::endl;
		file << "      .      .   \"#:. .:##\"##:. .:#\"  .      ." << std::endl;
		file << "          .      . \"####\"###\"####\"  ." << std::endl;
		file << "       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       ." << std::endl;
		file << "  .             \"#########\"#########\"        .        ." << std::endl;
		file << "        .    \"#:.  \"####\"###\"####\"  .:#\"   .       ." << std::endl;
		file << "     .     .  \"#######\"\"##\"##\"\"#######\"                  ." << std::endl;
		file << "                .\"##\"#####\"#####\"##\"           .      ." << std::endl;
		file << "    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     ." << std::endl;
		file << "      .     \"#######\"##\"#####\"##\"#######\"      .     ." << std::endl;
		file << "    .    .     \"#####\"\"#######\"\"#####\"    .      ." << std::endl;
		file << "            .     \"     000      \"    .     ." << std::endl;
		file << "       .         .   .   000     .        .       ." << std::endl;
		file << ".. .. ..................O000O........................ ...... ..." << std::endl;
		file.close();
	}
	else
		std::cerr << "Ofstream error!" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const ShrubberyCreationForm &src) {
	out << "Shrubbery Creation Form: " << src.getName() << "; " << "grade needed to sign: " << src.getSignedGrade() << "; "<< "grade needed to execute: " << src.getExecGrade() << "; " << "form is signed: " << src.isSigned() << "." << std::endl;
	return out;
}