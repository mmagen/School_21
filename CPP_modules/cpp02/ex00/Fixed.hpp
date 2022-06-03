#ifndef MODULE_CPP_FIXED_H
#define MODULE_CPP_FIXED_H
#include <iostream>
class Fixed
{
private:
	int _value;
	static const int _bits;
public:
	Fixed();
	Fixed(const Fixed& copy);
	~Fixed();
	int getRawBits() const;
	void setRawBits(int const raw);
	Fixed& operator=(const Fixed&);
};
#endif //MODULE_CPP_FIXED_H
