#ifndef MODULE_CPP_POINT_H
#define MODULE_CPP_POINT_H
# include <iostream>
# include <cmath>
# include "Fixed.hpp"

class Point
{
	Fixed _x;
	Fixed _y;

public:
	Point();
	~Point();
	Point(const Point &th);
	Point & operator=(Point const & th);
	Point(const Fixed &x, const Fixed &y);
	Fixed getX() const;
	Fixed getY() const;
};

std::ostream & operator<<(std::ostream & o, Point const & th);
bool bsp(Point const a, Point const b, Point const c, Point const point);
#endif //MODULE_CPP_POINT_H
