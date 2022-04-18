#ifndef D05_GRADETOOHIGHEXCEPTION_H
#define D05_GRADETOOHIGHEXCEPTION_H

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

#endif //D05_GRADETOOHIGHEXCEPTION_H
