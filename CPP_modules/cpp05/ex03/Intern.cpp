#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Form* createPresidential(std::string target)
{
	return new PresidentialPardonForm(target);
}

Form* createRobotomy(std::string target)
{
	return new RobotomyRequestForm(target);
}

Form* createShrubbery(std::string target)
{
	return new ShrubberyCreationForm(target);
}

typedef Form* (*func)(std::string target);

typedef struct s_data
{
	std::string name;
	func f;
}				data;

Intern::Intern(){}

Intern::Intern(const Intern &other)
{
	(void)other;
}

Intern &Intern::operator=(const Intern &src)
{
	(void)src;
	return *this;
}

Intern::~Intern(){}

Form* Intern::makeForm(std::string form, std::string target)
{
	Form* ret;
	data forms [] = {
			{"presidential pardon", &createPresidential},
			{"robotomy request", &createRobotomy},
			{"shrubbery creation", &createShrubbery}
	};
	for (int i = 0; i < 3; i++)
	{
		if (form == forms[i].name)
		{
			ret = forms[i].f(target);
			return ret;
		}
	}
	throw Intern::FormDoesntExist();
}

const char* Intern::FormDoesntExist::what() const throw()
{
	return "Form does not exist";
}