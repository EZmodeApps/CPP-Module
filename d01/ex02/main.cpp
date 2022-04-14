#include <iostream>
#include <string>

int main(void)
{
	std::string s = "HI THIS IS BRAIN";
	std::string* sPtr = &s;
	std::string &sRef = s;
	std::cout << "Address:" << std::endl;
	std::cout << &s << std::endl;
	std::cout << sPtr << std::endl;
	std::cout << &sRef << std::endl;
	std::cout << "\nValue:" <<std::endl;
	std::cout << s << std::endl;
	std::cout << *sPtr << std::endl;
	std::cout << sRef << std::endl;
	return (0);
}
