#include "iter.h"

template<typename T>
void inc(T &i) { i += 10; }

int	main( void )
{
	int			*intArr = new int[5];

	for (int i = 0; i < 5; i++)
		intArr[i] = i;
	std::cout << "Original: ";
	for (int i = 0; i < 5; i++)
		std::cout << intArr[i] << " ";
	std::cout << "\nNew:     ";
	::iter(intArr, 5, &inc);
	for (int i = 0; i < 5; i++)
		std::cout << intArr[i] << " ";
}