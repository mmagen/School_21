#include "Form.hpp"

Form::Form(std::string name, int grade_sign, int grade_success): _name(name),
_grade_sign(grade_sign), _grade_success(grade_success)
{
	if (grade_sign < 1 || grade_success < 1)
		throw Form::GradeTooHighException();
	if (grade_sign > 150 || grade_success > 150)
		throw Form::GradeTooLowException();
	_sign = false;
}

Form::Form(Form const& copy): _name(copy.getName()),
_grade_sign(copy.getGradeToSign()), _grade_success(copy.getGradeToExe())
{
	if (copy.getGradeToSign() < 1 || copy.getGradeToExe() < 1)
		throw Form::GradeTooHighException();
	if (copy.getGradeToSign() > 150 || copy.getGradeToExe() > 150)
		throw Form::GradeTooLowException();
	_sign = false;
}

Form::~Form(){}

Form& Form::operator=(Form const& src)
{
	if (this != &src)
		this->_sign = src.getIsSign();
	return (*this);
}

std::string const Form::getName() const
{
	return _name;
}

bool Form::getIsSign() const
{
	return _sign;
}

int	Form::getGradeToSign() const
{
	return _grade_sign;
}

int	Form::getGradeToExe() const
{
	return _grade_success;
}

void Form::beSigned(Bureaucrat& bur)
{
	if (bur.getGrade() > _grade_sign)
		throw Form::GradeTooLowException();
	else
		this->_sign = true;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "grade is to high";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "grade is to low";
}

std::ostream& operator<<(std::ostream& out, const Form& src)
{
	out << src.getName() << " form is ";
	if (src.getIsSign() == true)
		out << "signed";
	else
		out << "not signed";
	out << ". Grade minimun to be signed: " << src.getGradeToSign();
	out << ". Grade minimun to be success: " << src.getGradeToExe();
	out << std::endl;
	return (out);
}