#ifndef MODULE_CPP_ROBOTOMYREQUESTFORM_HPP
#define MODULE_CPP_ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"

class RobotomyRequestForm : public Form{
private:
	std::string target;
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm& other);
	const RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
	~RobotomyRequestForm();
	void execute(Bureaucrat const& executor) const;
	std::string getTarget() const;

	class Robotomized: public std::exception{
		public:
			const char *what() const throw();
	};
};
#endif //MODULE_CPP_ROBOTOMYREQUESTFORM_HPP
