#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string trg):
Form("Robot", 72, 45)
{
	target = trg;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other):
Form(other)
{
	target = other.getTarget();
}

const RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	this->target = other.getTarget();
	return *this;
}

const char* RobotomyRequestForm::Robotomized::what() const throw()
{
	return "RobotomyRequestForm: could not robotomize\n";
}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
	if (this->_sign && this->_grade_success >= executor.getGrade())
	{
		if (rand() % 2)
			std::cout << "Some drilling noises " << this->target << " has  been robotomized successfully\n";
		else
			throw RobotomyRequestForm::Robotomized();
	}
	else
		throw Bureaucrat::GradeTooLowException();
}

RobotomyRequestForm::~RobotomyRequestForm() {}

std::string RobotomyRequestForm::getTarget() const
{
	return target;
}