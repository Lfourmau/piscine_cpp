#include "Form.hpp"

Form::Form(std::string name, std::string target, int _sign_grade, int _exec_grade) : _name(name),  _target(target), _is_signed(0), _sign_grade(_sign_grade), _exec_grade(_exec_grade)
{
	try
	{
		if (_sign_grade < 1)
			throw(Form::GradeTooHighException());
		else if (_sign_grade > 150)
			throw(Form::GradeTooLowException());
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
}
Form::Form(Form const& src) : _is_signed(src._is_signed), _sign_grade(src._sign_grade), _exec_grade(src._exec_grade)
{
	operator=(src);
}
Form::~Form(void) {};


//accessors
std::string Form::getName(void) const 
{
	return (this->_name);
}
int Form::getSignGrade(void) const
{
	return (this->_sign_grade);
}
int Form::getExecGrade(void) const
{
	return (this->_exec_grade);
}
bool Form::getSigned(void) const
{
	return (this->_is_signed);
}
std::string Form::getTarget(void) const
{
	return (this->_target);
}

//actions
void Form::BeSigned(Bureaucrat bureaucrat)
{
	if (bureaucrat.getGrade() <= this->_sign_grade && this->_sign_grade >= 1 && this->_sign_grade <= 150)
		this->_is_signed = 1;
	else
		throw(Form::GradeTooLowException());
}

//operators
Form& Form::operator=(Form const& rhs)
{
	(void)rhs;
	return (*this);
}
std::ostream& operator<<(std::ostream& out, Form const& rhs)
{
	out << rhs.getName() << ", Form grade " << rhs.getSignGrade() << "," << rhs.getExecGrade() << "is signed : " << rhs.getSigned();
	return (out);
}
