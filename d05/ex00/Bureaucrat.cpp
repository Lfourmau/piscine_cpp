#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) {};
Bureaucrat::Bureaucrat(int grade) : _name("Default"), _grade(grade)
{
}
Bureaucrat::Bureaucrat(Bureaucrat const& src)
{
	operator=(src);	
}
Bureaucrat& Bureaucrat::operator=(Bureaucrat const& rhs)
{
	this->_grade = rhs.getGrade();
	return (*this);
}
Bureaucrat::~Bureaucrat(void) {};
std::string Bureaucrat::getName(void) const
{
	return (this->_name);
}
int Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void Bureaucrat::downgrade(void)
{
	try
	{
		if (this->_grade == 150)
			throw (GradeTooHighException);
		this->_grade += 1;
	}
	catch(Exception& e)
	{
		std::cout << "You can't downgrade the bureaucrat" << std::endl;
	}
	
}
void Bureaucrat::promotion(void)
{
	try
	{
		if (this->_grade == 1)
			throw (GradeTooHighException);
		this->_grade -= 1;
	}
	catch(Exception& e)
	{
		std::cout << "You can't promute the bureaucrat" << std::endl;
	}
}

std::ostream& operator<<(std::ostream& out, Bureaucrat const& rhs)
{
	out << rhs.getName() << ", Bureaucrat grade " << rhs.getGrade();
	return (out);
}