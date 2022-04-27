#ifndef D08_MUTANTSTACK_H
#define D08_MUTANTSTACK_H

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
public:

	MutantStack() {}
	MutantStack(const MutantStack &other) : std::stack<T>(other) {}
	MutantStack &operator = (const MutantStack &other) {
		std::stack<T>::operator=(other);
		return *this;
	}
	~MutantStack() {}

	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin() {
		return this->c.begin();
	}
	iterator end() {
		return this->c.end();
	}
};


#endif //D08_MUTANTSTACK_H
