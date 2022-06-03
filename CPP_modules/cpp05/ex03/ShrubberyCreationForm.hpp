#ifndef MODULE_CPP_SHRUBBERYCREATIONFORM_HPP
#define MODULE_CPP_SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"

class ShrubberyCreationForm : public Form{
	std::string target;
	static std::string trees[3];
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm& other);
	const ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
	~ShrubberyCreationForm();
	void execute(Bureaucrat const& executor) const;
	std::string getTarget() const;

	class CouldNotOpenFile : public std::exception{
		public:
			const char* what() const throw();
	};
};
#endif //MODULE_CPP_SHRUBBERYCREATIONFORM_HPP
