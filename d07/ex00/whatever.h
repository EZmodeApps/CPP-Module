#ifndef D07_WHATEVER_H
#define D07_WHATEVER_H

#include <iostream>

template<typename T>
T max(T x, T y) {
	if (x >= y)
		return x;
	else
		return y;
}

template<typename T>
T min(T x, T y) {
	if (x <= y)
		return x;
	else
		return y;
}

template<typename T>
void swap(T &x, T &y) {
	T temp;

	temp = x;
	x = y;
	y = temp;
}

#endif //D07_WHATEVER_H
