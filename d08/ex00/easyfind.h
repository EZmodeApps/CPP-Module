#ifndef D08_EASYFIND_H
#define D08_EASYFIND_H

#include <algorithm>
#include <iostream>
#include <vector>

class noNumber : public std::exception {
public:
	const char* what() const throw() { return "Number not found!"; }
};

template<typename T>
typename T::iterator easyfind(T &data, int find) {
	typename T::iterator it;

	it = std::find(data.begin(), data.end(), find);
	if (it == data.end())
		throw noNumber();
	else
		return it;
}


#endif //D08_EASYFIND_H
