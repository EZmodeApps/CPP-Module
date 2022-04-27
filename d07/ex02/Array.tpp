#include "Array.h"

template<typename T>
Array<T>::Array(): _size(0), arr(nullptr) {}

template<typename T>
Array<T>::Array(unsigned int value): _size(value)
{
	arr = new T[value];
}

template<typename T>
Array<T>::Array(const Array<T> &a) {
	*this = a;
}

template<typename T>
Array<T> &Array<T>::operator=(const Array<T> &a) {
	_size = a.size();

	arr = new T[_size];
	for (int i = 0; i < _size; i++)
		arr[i] = a[i];
	return *this;
}

template<typename T>
T& Array<T>::operator [] (const int index) const {
	if (index < 0 || index >= _size)
		throw OutOfRange();
	return arr[index];
}

template<typename T>
Array<T>::~Array() {delete[] arr;}


template<typename T>
int Array<T>::size() const {
	return this->_size;
}
