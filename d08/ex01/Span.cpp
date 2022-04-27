#include "Span.h"

Span::Span() {
	N = 0;
	memory = 0;
}

Span::Span(unsigned int size): N(size), memory(size) {}

Span::Span(const Span &src) {
	N = src.N;
}

Span &Span::operator=(const Span &src) {
	N = src.N;
	return *this;
}

Span::~Span() {}

void Span::addNumber(int num) {
	if (!this->memory)
		throw std::out_of_range("Vector memory is full!");
	numbers.push_back(num);
	memory--;
}

void Span::addRandomNumbers(int count) {
	srand(time(NULL));

	for (int i = 0; i < count; ++i) {
		try {
			this->addNumber(rand());
		}
		catch(const std::exception& e) {
			std::cerr << i << " numbers was added, can't add more" << '\n';
			return ;
		}
	}
}

void Span::addRandomNumbers(int count, int cap) {
	srand(time(NULL));

	for (int i = 0; i < count; ++i) {
		try {
			this->addNumber((rand() % cap));
		}
		catch(const std::exception& e) {
			std::cerr << i << " numbers was added, can't add more" << '\n';
			return ;
		}
	}
}

int Span::shortestSpan() const {
	if (numbers.size() < 2)
		throw std::logic_error("Span can't be found, too few numbers");

	std::vector<int> temp = numbers;
	int span;
	std::vector<int>::iterator it;

	std::sort(temp.begin(), temp.end());
	for (it = temp.begin() + 1, span = *it - *(it - 1); it < temp.end() - 1; ++it)
		if (*(it + 1) - *it < span)
			span = *(it + 1) - *it;
	return span;
}

int Span::longestSpan() const {
	if (numbers.size() < 2)
		throw std::logic_error("Span can't be found, too few numbers");

	std::vector<int> temp = numbers;
	std::sort(temp.begin(), temp.end());
	return *(temp.end() - 1) - *temp.begin();
}

void Span::addWithIterators(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
	std::vector<int> temp(begin, end);
	if (temp.size() > memory)
		throw std::out_of_range("Can't add so many numbers");
	for (; begin != end; ++begin) {
		numbers.push_back(*begin);
		--memory;
	}
}

std::ostream &operator<<( std::ostream &ostr, Span const &src) {
	std::cout << "Span:" <<std::endl;
	for (unsigned int i = 0; i < src.numbers.size(); i++)
		std::cout << src.numbers[i] << " ";
	std::cout << std::endl;
	try {
		int	shortest = src.shortestSpan();
		int	longest = src.longestSpan();
		ostr << "Shortest span is "	<< shortest << ".\n" <<"Longest span is " << longest << ".";
	}
	catch(const std::exception& e) {
		ostr << "Too few values to print information";
	}
	return ostr;
}