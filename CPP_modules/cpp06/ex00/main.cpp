#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat a("test1", 155);
		std::cout << a;
		Bureaucrat b("test2", 99);
		std::cout << b;
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat b ("test3", 99);
		b.decrementGrade();
		std::cout << b;
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat b ("test4", 1);
		b.incrementGrade();
		std::cout << b;
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}
}