#ifndef D05_GRADETOOLOWEXCEPTION_H
#define D05_GRADETOOLOWEXCEPTION_H

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

#endif //D05_GRADETOOLOWEXCEPTION_H
