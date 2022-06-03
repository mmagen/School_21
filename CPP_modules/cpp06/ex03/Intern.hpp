#ifndef MODULE_CPP_INTERN_HPP
#define MODULE_CPP_INTERN_HPP
#include "Form.hpp"
class Intern
{
public:
	Intern();
	~Intern();
	Intern(const Intern& other);
	Intern& operator=(Intern const& src);
	Form* makeForm(std::string form, std::string target);
	class FormDoesntExist: public std::exception{
		public:
			const char* what() const throw();
	};
};
#endif //MODULE_CPP_INTERN_HPP
