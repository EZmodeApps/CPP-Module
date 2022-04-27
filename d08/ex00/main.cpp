#include "easyfind.h"

int main() {
	std::vector<int> vec;

	for (int i = 1; i <= 10; i++)
		vec.push_back(i);
	std::cout << "Values in vector: " << std::endl;
	std::vector<int>::iterator it = vec.begin();
	for (; it != vec.end(); it++)
		std::cout << *it << ' ';
	std::cout << std::endl;
	std::cout << "Trying to find 9: " << std::endl;
	try {
		it = easyfind(vec, 9);
		std::cout << "*it = " << *it << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() <<std::endl;
	}
	std::cout << "Trying to find 4: " << std::endl;
	try {
		it = easyfind(vec, 4);
		std::cout << "*it = " << *it << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() <<std::endl;
	}
	std::cout << "Trying to find 42: " << std::endl;
	try {
		it = easyfind(vec, 42);
		std::cout << "*it = " << *it << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() <<std::endl;
	}
}
