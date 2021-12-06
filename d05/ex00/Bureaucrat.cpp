#include "Bureaucrat.hpp"

//constructors and destructors
Bureaucrat::Bureaucrat(void) {};
Bureaucrat::~Bureaucrat(void) {};
Bureaucrat::Bureaucrat(int grade) : _name("Default"), _grade(grade)
{
}
Bureaucrat::Bureaucrat(Bureaucrat const& src)
{
	operator=(src);	
}

//accessors
std::string Bureaucrat::getName(void) const
{
	return (this->_name);
}
int Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

//exceptions
const char* HighException::what(void) const throw()
{
	return ("The bureaucrat cannot be promute again");
}
const char* LowException::what(void) const throw()
{
	return ("The bureaucrat cannot be downgrade again");
}

//operations
void Bureaucrat::downgrade(void)
{
	try
	{
		if (this->_grade == 150)
			throw (GradeTooLowException);
		this->_grade += 1;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
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
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}


//operators
std::ostream& operator<<(std::ostream& out, Bureaucrat const& rhs)
{
	out << rhs.getName() << ", Bureaucrat grade " << rhs.getGrade();
	return (out);
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const& rhs)
{
	this->_grade = rhs.getGrade();
	return (*this);
}