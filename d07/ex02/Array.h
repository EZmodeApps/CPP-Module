#ifndef D07_ARRAY_H
#define D07_ARRAY_H

#include <iostream>

template <typename T>
class Array {
private:
	int _size;
	T *arr;

public:
	Array();
	Array(unsigned int value);
	Array (const Array<T> &a);
	Array &operator=(const Array<T> &a);
	~Array();

	T &operator [] (const int index) const;
	int size() const;

	class OutOfRange : public std::exception {
	public:
		const char* what() const throw() { return "index is out of range"; }
	};
};

# include "Array.tpp"


#endif //D07_ARRAY_H
