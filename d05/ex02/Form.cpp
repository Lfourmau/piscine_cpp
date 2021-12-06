#include "Form.hpp"

Form::Form(int grade) :  _name("formDefault"), _is_signed(0), _require_grade(grade)
{
	try
	{
		if (grade < 1)
			throw(Form::GradeTooHighException());
		else if (grade > 150)
			throw(Form::GradeTooLowException());
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
}
Form::Form(Form const& src) : _is_signed(src._is_signed), _require_grade(src._require_grade)
{
	operator=(src);
}
Form::~Form(void) {};


//accessors
std::string Form::getName(void) const 
{
	return (this->_name);
}
int Form::getRequireGrade(void) const
{
	return (this->_require_grade);
}
bool Form::getSigned(void) const
{
	return (this->_is_signed);
}

//actions
void Form::execute(Bureaucrat const & executor) const
{
	if (this->_is_signed == 0)
		//throwException
	if (executor.getGrade() > this->_require_grade)
		throw(GradeTooLowException());
	//execute the form
}
//void Form::BeSigned(Bureaucrat bureaucrat)
//{
//	if (bureaucrat.getGrade() <= this->_require_grade && this->_require_grade >= 1 && this->_require_grade <= 150)
//		this->_is_signed = 1;
//	else
//		throw(Form::GradeTooLowException());
//}

//operators
Form& Form::operator=(Form const& rhs)
{
	(void)rhs;
	return (*this);
}
std::ostream& operator<<(std::ostream& out, Form const& rhs)
{
	out << rhs.getName() << ", Form grade " << rhs.getRequireGrade() << ", is signed : " << rhs.getSigned();
	return (out);
}
