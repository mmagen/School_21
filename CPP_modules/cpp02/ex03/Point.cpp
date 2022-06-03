#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
}

Point::~Point()
{
}

Point::Point (Point const& pt)
{
	*this = pt;
}

Point & Point::operator=(Point const& pt)
{
	_x = pt.getX();
	_y = pt.getY();
	return *this;
}

Fixed Point::getX() const
{
	return _x;
}

Fixed Point::getY() const
{
	return _y;
}

Point::Point(const Fixed &x, const Fixed &y)
{
	_x = x;
	_y = y;
}

std::ostream & operator<<(std::ostream& o, Point const& th)
{
	o << "x: " << th.getX() << "  y: " <<  th.getY();
	return o;
}