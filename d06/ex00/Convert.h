#ifndef D06_CONVERT_H
#define D06_CONVERT_H

#include <iostream>
#include <string>
#include <cmath>

class Convert {
public:
	Convert();
	Convert(std::string str);
	Convert(const Convert &src);
	Convert &operator=(const Convert &src);
	~Convert();

	bool convertStr(char *str);
	void printAll();

private:
	double value;
	enum dataType {
		noType = -1,
		_char,
		_int,
		_float,
		_double
	};
	dataType dtype;
	dataType infNan(std::string src, int i);
	dataType parseStr(std::string str);
	void printChar();
	void printInt();
	void printFloat();
	void printDouble();
	class emptyInput : public std::exception {
	public:
		virtual const char* what() const throw() {
			return ("Exception: argument is empty!"); }
	};

	class notNumeric : public std::exception {
	public:
		virtual const char* what() const throw() {
			return ("Exception: argument value is not numeric!"); }
	};
};


#endif //D06_CONVERT_H
