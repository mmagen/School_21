#include "Fixed.hpp"
#include <cmath>
const int Fixed::_bits = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_value = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& to_copy)
{
	std::cout << "Copy constructor called" << std::endl;
	_value = to_copy.getRawBits();
}

Fixed::Fixed(const int n) {
	std::cout << "Int constructor called" << std::endl;
	setRawBits(n << _bits);
}

Fixed::Fixed(const float f) {
	std::cout << "Float constructor called\n";
	setRawBits((int)roundf(f * (1 << _bits)));
}

void Fixed::setRawBits(int const raw)
{
	_value = raw;
}

int Fixed::getRawBits() const
{
	return (_value);
}

Fixed& Fixed::operator=(const Fixed& to_copy)
{
	std::cout << "Assignation operator called" << std::endl;
	_value = to_copy.getRawBits();
	return (*this);
}

float Fixed::toFloat() const
{
	float	f;

	f = (float)getRawBits() / (1 << _bits);
	return (f);
}

int Fixed::toInt() const
{
	return (getRawBits() >> _bits);
}

std::ostream& operator<<( std::ostream& o, Fixed const& th)
{
	o << th.toFloat();
	return (o);
}