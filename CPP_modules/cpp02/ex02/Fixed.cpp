#include "Fixed.hpp"
#include <cmath>
const int Fixed::_bits = 8;

Fixed::Fixed()
{
	_value = 0;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed& to_copy)
{
	_value = to_copy.getRawBits();
}

Fixed::Fixed(const int n) {
	setRawBits(n << _bits);
}

Fixed::Fixed(const float f) {
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

std::ostream & operator<<( std::ostream& o, Fixed const& th)
{
	o << th.toFloat();
	return (o);
}

bool Fixed::operator>(Fixed const& th) const
{
	return (_value > th.getRawBits());
}

bool Fixed::operator<(Fixed const& th) const
{
	return (_value < th.getRawBits());
}

bool Fixed::operator>=(Fixed const& th) const
{
	return (_value >= th.getRawBits());
}

bool Fixed::operator<=(Fixed const& th) const
{
	return (_value <= th.getRawBits());
}

bool Fixed::operator==(Fixed const& th) const
{
	return (_value == th.getRawBits());
}

bool Fixed::operator!=(Fixed const& th) const
{
	return (_value != th.getRawBits());
}

Fixed Fixed::operator+(Fixed const& th) const
{
	Fixed	sum;

	sum.setRawBits(_value + th.getRawBits());
	return (sum);
}

Fixed Fixed::operator-(Fixed const& th) const
{
	Fixed	min;

	min.setRawBits(_value - th.getRawBits());
	return (min);
}

Fixed Fixed::operator*(Fixed const& th) const
{
	Fixed	res;

	res.setRawBits(_value * (th.getRawBits() >> _bits));
	return (res);
}

Fixed Fixed::operator/(Fixed const& th) const
{
	Fixed	res;

	res.setRawBits(_value / (th.getRawBits() >> _bits));
	return (res);
}

Fixed Fixed::operator++(int)
{
	Fixed	res;

	res.setRawBits(_value);
	_value++;
	return (res);
}

Fixed&	Fixed::operator++()
{
	_value++;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed	res;

	res.setRawBits(_value);
	_value--;
	return (res);
}

Fixed&	Fixed::operator--()
{
	_value--;
	return (*this);
}

Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	return (a < b ? a : b);
}

Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	return (a > b ? a : b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	return (a < b ? a : b);
}

const Fixed& Fixed::max(const Fixed & a, const Fixed & b)
{
	return (a > b ? a : b);
}