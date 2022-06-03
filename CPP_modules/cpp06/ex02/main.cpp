#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	try
	{
		Bureaucrat b("someone",1);
		Form* f1 = new ShrubberyCreationForm("target1");
		Form* f2 = new PresidentialPardonForm("target2");
		Form* f3 = new RobotomyRequestForm("target3");
		std::cout << b;
		std::cout << *f1;
		std::cout << *f2;
		std::cout << *f3;
		f1->beSigned(b);
		f2->beSigned(b);
		f3->beSigned(b);
		std::cout << *f1;
		std::cout << *f2;
		std::cout << *f3;
		f1->execute(b);
		f2->execute(b);
		f3->execute(b);
		delete f1;
		delete f2;
		delete f3;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}