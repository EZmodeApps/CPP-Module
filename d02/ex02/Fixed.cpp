#include "Fixed.h"

Fixed::Fixed(): value(0) {}

Fixed::Fixed(const int raw):  value(raw << bits) {}

Fixed::Fixed(const float raw)  {
	int pow = 1 << bits;
	value = roundf(raw * pow);
}

Fixed::~Fixed() {}

Fixed::Fixed(const Fixed &src) {
	*this = src;
}

Fixed &Fixed::operator = (const Fixed &src) {
	value = src.getRawBits();
	return *this;
}

int Fixed::getRawBits() const {
	return value;
}

void Fixed::setRawBits(const int raw) {
	value = raw;
}

int Fixed::toInt(void) const {
	return value >> bits;
}

float Fixed::toFloat(void) const {
	int pow = 1 << bits;
	return (float)value / pow;
}

std::ostream &operator<<(std::ostream &out, const Fixed &f) {
	out << f.toFloat();
	return out;
}

bool Fixed::operator==(const Fixed &src) {
	return (this->getRawBits() == src.getRawBits());
}

bool Fixed::operator!=(const Fixed &src) {
	return (this->getRawBits() != src.getRawBits());
}

bool Fixed::operator>(const Fixed &src) {
	return (this->getRawBits() > src.getRawBits());
}

bool Fixed::operator>=(const Fixed &src) {
	return (this->getRawBits() >= src.getRawBits());
}

bool Fixed::operator<(const Fixed &src) {
	return (this->getRawBits() < src.getRawBits());
}

bool Fixed::operator<=(const Fixed &src) {
	return (this->getRawBits() <= src.getRawBits());
}

Fixed Fixed::operator+(const Fixed &src) {
	Fixed result(this->toFloat() + src.toFloat());
	return result;
}

Fixed Fixed::operator-(const Fixed &src) {
	Fixed result(this->toFloat() - src.toFloat());
	return result;
}

Fixed Fixed::operator/(const Fixed &src) {
	Fixed result(this->toFloat() / src.toFloat());
	return result;
}

Fixed Fixed::operator*(const Fixed &src) {
	Fixed result(this->toFloat() * src.toFloat());
	return result;
}

Fixed &Fixed::operator++() {
	this->value++;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed result(*this);
	value++;
	return result;
}

Fixed &Fixed::operator--() {
	this->value--;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed result(*this);
	result.value--;
	return result;
}

Fixed &Fixed::max(Fixed &src1, Fixed &src2) {
	if (src1 > src2)
		return src1;
	else
		return src2;
}

const Fixed &Fixed::max(const Fixed &src1, const Fixed &src2) {
	if (src1.getRawBits() > src2.getRawBits())
		return src1;
	else
		return src2;
}

Fixed &Fixed::min(Fixed &src1, Fixed &src2) {
	if (src1 < src2)
		return src1;
	else
		return src2;
}

const Fixed &Fixed::min(const Fixed &src1, const Fixed &src2) {
	if (src1.getRawBits() > src2.getRawBits())
		return src1;
	else
		return src2;
}
