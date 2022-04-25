#include <iostream>
#include <stdint.h>

typedef struct s_data {

	int		value;

}			Data;

uintptr_t serialize(Data *ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *deserialize (uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}

int main() {

	Data *d = new Data;
	d->value = 42;
	uintptr_t raw = serialize(d);
	Data *ptr = deserialize(raw);

	std::cout << "Original Data adress: " << d << std::endl;
	std::cout << "Adress after casts:   " << ptr << std::endl;
	std::cout << "Original value:       " << d->value << std::endl;
	std::cout << "Value in new pointer: " << ptr->value << std::endl;

	return 0;
}

