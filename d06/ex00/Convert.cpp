#include "Convert.h"

Convert::Convert() {
	value = 0.0;
	dtype = noType;
}

Convert::Convert(std::string str) {
	Convert();
	parseStr(str);
}

Convert::Convert(const Convert &src) {
	*this = src;
}

Convert &Convert::operator=(const Convert &src) {
	this->value = src.value;
	return *this;
}

Convert::~Convert() {}

Convert::dataType Convert::infNan(std::string src, int i) {

	char inf[5] = "inff";
	int j = 0;
	for (; src[i + j] && src[i + j] == inf[j]; j++);
	if (j == 3)
		return _double;
	if (j == 4)
		return _float;

	char nan[5] = "nanf";
	int k = 0;
	for (; src[i + k] && src[i + k] == nan[k]; k++);
	if (k == 3)
		return _double;
	if (k == 4)
		return _float;
	return noType;
}

Convert::dataType Convert::parseStr(std::string str)
{
//	float result = 0.0;
//
//	if (src.size() > 1)
//	{
//		if (!src.compare("nanf"))
//			std::cout << "nanf\n";
//		else if (!src.compare("inff"))
//			std::cout << "nanf\n";
//	}
//	else if (src.size() == 1 && std::isalpha(src[0]))
//		std::cout << "char\n";
//	else
//		result = std::stof(src, 0);
//	std::cout << result << std::endl;
	if (str.empty())
		throw EmptyInput();
	if (!str[1] && std::isalpha(str[0]))
		return _char;

	int i = 0;

	if (str[i] == '-' || str[i] == '+')
		i++;
	dataType arg = isInfOrNan(str, i);
	if (arg != noType)
		return arg;
	if (!std::isdigit(str[i]))
		throw NotNumeric();

	int dot = 0;
	int f = 0;

	for (; str[i]; i++) {
		if (str[i] == '.')
			dot++;
		if (str[i] == 'f')
			f++;
		if (dot > 1 || f > 1 || (!std::isdigit(str[i]) && str[i] != 'f' && str[i] != '.'))
			throw NotNumeric();
	}
	if (!dot && !f)
		return _int;
	else if (!f) //else
		return _double;
	return _float;
}

bool Convert::convertStr(char *str) {
	value = 0.0;
	dtype = noType;
	dtype = parseStr(str);
	if (dtype == _char) {
		value = static_cast<int>(*str);
		return true;
	}
	value = std::stof(str, 0);
	return (true);
}

void Convert::printValue(){

	std::cout << "Current type is: ";
	switch(dtype)
	{
		case _char:
			std::cout << "char" << std::endl;
			break;

		case _int:
			std::cout << "int" << std::endl;
			break;

		case _float:
			std::cout << "float" << std::endl;
			break;

		case _double:
			std::cout << "double" << std::endl;
			break;

		default:
			std::cout << ":<" << std::endl;
			break;
	}
	printChar();
	printInt();
	printFloat();
	printDouble();
}

void Convert::printChar() {

	std::cout << "char: ";

	if (value < 0 || value > 127 || std::isnan(value))
		std::cout << "impossible";
	else if (value < 32 || value > 126)
		std::cout << "char is not printable";
	else
		std::cout << "\'" << static_cast<char>(value) << "\'";

	std::cout << std::endl;
}

void Convert::printInt() {

	std::cout << "integer: ";
	if (value > std::numeric_limits<int>::max()
		|| value < std::numeric_limits<int>::min()
		|| std::isnan(value))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(value) << std::endl;
}

void Convert::printFloat() {

	std::cout << "float: ";
	std::cout << static_cast<float>(value);
	if (value - static_cast<int>(value) == 0)
		std::cout << ".0";
	std::cout << "f" << std::endl;
}

void Convert::printDouble() {

	std::cout << "double: ";
	std::cout << value;
	if (value - static_cast<int>(value) == 0)
		std::cout << ".0";
	std::cout << std::endl;
}