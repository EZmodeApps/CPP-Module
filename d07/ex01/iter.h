#ifndef D07_ITER_H
#define D07_ITER_H

#include <iostream>

template <typename T>
void iter(T *arr, int length, void (*foo)(T &)) {
	for (int i = 0; i < length; i++)
		foo(arr[i]);
}

#endif //D07_ITER_H
