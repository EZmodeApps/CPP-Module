#ifndef D05_BUREAUCRAT_H
#define D05_BUREAUCRAT_H

#include <iostream>
#include <exception>

class Bureaucrat {
public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &src);
	Bureaucrat &operator=(const Bureaucrat &src);
	~Bureaucrat();

	int getGrade();
	std::string getName();
	void incGrade();
	void decGrade();

	class GradeTooHighException: public std::exception {
	private:
		const char* error;
	public:
		GradeTooHighException() {
			error = "Grade is too high!";
		};
		virtual const char* what() const throw()
		{
			return error;
		};
	};

	class GradeTooLowException: public std::exception {
	private:
		const char* error;
	public:
		GradeTooLowException() {
			error = "Grade is too low!";
		};
		virtual const char* what() const throw()
		{
			return error;
		};
	};

	GradeTooHighException high;
	GradeTooLowException low;

private:
	const std::string name;
	int grade;
};


#endif //D05_BUREAUCRAT_H
