#ifndef D08_SPAN_H
#define D08_SPAN_H

#include <algorithm>
#include <iostream>
#include <vector>
#include <stdexcept>
#include <time.h>

class Span {
private:
	unsigned int N;
	unsigned int memory;

public:
	Span();
	Span(unsigned int size);
	Span(const Span &src);
	Span &operator=(const Span &src);
	~Span();

	std::vector<int>numbers;
	void addNumber(int num);
	void addRandomNumbers(int count);
	void addRandomNumbers(int count, int cap);
	int shortestSpan() const;
	int longestSpan() const;
	void addWithIterators(std::vector<int>::iterator begin, std::vector<int>::iterator end);
};

std::ostream &operator<<( std::ostream &ostr, Span const &src);

#endif //D08_SPAN_H
