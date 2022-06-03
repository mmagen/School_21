#ifndef MODULE_CPP_PRESIDENTIALPARDONFORM_HPP
#define MODULE_CPP_PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"

class PresidentialPardonForm : public Form{
	std::string target;

public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm& other);
	const PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
	~PresidentialPardonForm();
	void execute(Bureaucrat const& executor) const;
	std::string getTarget() const;
};
#endif //MODULE_CPP_PRESIDENTIALPARDONFORM_HPP
