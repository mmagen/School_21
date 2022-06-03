#ifndef MODULE_CPP_FIXED_H
#define MODULE_CPP_FIXED_H
#include <iostream>
class Fixed
{
	int _value;
	static const int _bits;
public:
	Fixed();
	Fixed(const int n);
	Fixed(const float f);
	Fixed(const Fixed& copy);
	~Fixed();
	int getRawBits() const;
	void setRawBits(int const raw);
	Fixed& operator=(const Fixed& copy);
	float toFloat() const;
	int toInt() const;

	bool	operator>(Fixed const& th) const;
	bool	operator<(Fixed const& th) const;
	bool	operator>=(Fixed const& th) const;
	bool	operator<=(Fixed const& th) const;
	bool	operator==(Fixed const& th) const;
	bool	operator!=(Fixed const& th) const;
	Fixed	operator+(Fixed const& th) const;
	Fixed	operator-(Fixed const& th) const;
	Fixed	operator*(Fixed const& th) const;
	Fixed	operator/(Fixed const& th) const;
	Fixed	operator++(int);
	Fixed&	operator++();
	Fixed	operator--(int);
	Fixed&	operator--();
	static const Fixed&	min(const Fixed& a, const Fixed& b);
	static const Fixed&	max(const Fixed& a, const Fixed& b);
};
std::ostream& operator<<( std::ostream& o, Fixed const& th);
#endif //MODULE_CPP_FIXED_H
