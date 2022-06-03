#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat b1("test1", 1);
	Bureaucrat b2("test2", 6);

	try {
		Form f1("My_name", 5, 5);
		std::cout << f1;

		b1.signForm(f1);
		f1.beSigned(b1);
		b2.signForm(f1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		Form f2("My_name", 1, 150);
		std::cout << f2;

		b1.signForm(f2);
		f2.beSigned(b1);
		b2.signForm(f2);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		Form f3("My_name", 0, 150);
		std::cout << f3;

		b1.signForm(f3);
		f3.beSigned(b1);
		b2.signForm(f3);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		Form f4("My_name", 1, 151);
		std::cout << f4;

		b1.signForm(f4);
		f4.beSigned(b1);
		b2.signForm(f4);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}