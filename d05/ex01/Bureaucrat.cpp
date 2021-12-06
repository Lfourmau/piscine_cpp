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

//operations
void Bureaucrat::downgrade(void)
{
	try
	{
		if (this->_grade == 150)
			throw (GradeTooLowException());
		this->_grade += 1;
		std::cout << this->_name << " is retrograted and now grade " << this->_grade << std::endl;
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
			throw (GradeTooHighException());
		this->_grade -= 1;
		std::cout << this->_name << " is promute and now grade " << this->_grade << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}
void Bureaucrat::signForm(Form& toSign)
{
	try
	{
		toSign.BeSigned(*this);
		std::cout << this->_name << " signs " << toSign.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->_name << " cannot sign " << toSign.getName() << " because ";
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