#include "Span.h"

int main()
{
	std::cout << "==================Test 1==================" << std::endl;
	Span sp1 = Span(5);
	sp1.addNumber(6);
	sp1.addNumber(3);
	sp1.addNumber(17);
	sp1.addNumber(9);
	sp1.addNumber(11);
	std::cout << sp1 << "\n" << std::endl;

	std::cout << "==================Test 2==================" << std::endl;
	Span sp2 = Span(100);
	sp2.addRandomNumbers(100, 100);
	std::cout << sp2 << "\n" << std::endl;

	std::cout << "==================Test 3==================" << std::endl;
	Span sp3 = Span(1000);
	sp3.addRandomNumbers(1000, 10000);
	std::cout << sp3 << "\n" << std::endl;

	std::cout << "==================Test 4==================" << std::endl;
	Span	sp4(100);
	std::vector<int> vec;
	std::cout << "Original vector:" <<std::endl;
	for (int i = 0; i < 5; i++) {
		vec.push_back(i);
		std::cout << vec[i] << " ";
	}
	std::cout << "\n";
	try {
		sp4.addWithIterators(vec.begin(), vec.end());
		for (int i = 6; i < 10; i++)
			vec.push_back(i * 10);
		sp4.addWithIterators(vec.begin(), vec.end());
		}
	catch(const std::exception& e) {

		std::cerr << e.what() << std::endl;
	}
	std::cout << sp4 << std::endl;
	return 0;
}
