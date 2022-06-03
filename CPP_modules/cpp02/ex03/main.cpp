#include <iostream>
#include "Point.hpp"

int main( void ) {
	Point a(0, 0);
	Point b(4, 0);
	Point c(0, 4);
	bool boo;

	Point pt(1, 1);
	boo = bsp(a, b, c, pt);
	std::cout << "Is pt: " << pt << " in the triangle ?" << std::endl;
	std::cout << (boo ? "Yes" : "No") << std::endl << std::endl;

	Point pt1(-10, 0);
	boo = bsp(a, b, c, pt1);
	std::cout << "Is pt1: " << pt1 << " in the triangle ?" << std::endl;
	std::cout << (boo ? "Yes" : "No") << std::endl << std::endl;

	Point pt2(0, 1);
	boo = bsp(a, b, c, pt2);
	std::cout << "Is pt2: " << pt2 << " in the triangle ?" << std::endl;
	std::cout << (boo ? "Yes" : "No") << std::endl << std::endl;

	Point pt3(2, 1);
	boo = bsp(a, b, c, pt3);
	std::cout << "Is pt2: " << pt3 << " in the triangle ?" << std::endl;
	std::cout << (boo ? "Yes" : "No") << std::endl << std::endl;
	return 0;
}
