#include "Intern.hpp"

Intern::Intern(void) {};
Intern::~Intern(void) {};

Intern& Intern::operator=(Intern const& rhs)
{
	(void)rhs;
	return (*this);
}
Intern::Intern(Intern const& src)
{
	operator=(src);
}

void Intern::shrub(std::string formTarget)
{
	ShrubberyCreationForm shrub(formTarget);
	this->_ret = new ShrubberyCreationForm(formTarget);
	*this->_ret = shrub;
}
void Intern::robot(std::string formTarget)
{
	RobotomyRequestForm robot(formTarget);
	this->_ret = new RobotomyRequestForm(formTarget);
	*this->_ret = robot;
}
void Intern::presidential(std::string formTarget)
{
	PresidentialPardonForm pres(formTarget);
	this->_ret = new PresidentialPardonForm(formTarget);
	*this->_ret = pres;
}

void Intern::Form_creation(std::string formName, std::string formTarget)
{
	int i = 0;
	void (Intern::*functionsPtr[])(std::string formTarget)= {&Intern::shrub, &Intern::robot, &Intern::presidential};
	std::string forms[3] = {"ShrubberyCreation", "RobotomyRequest", "PresidentialPardon"};

	while (formName.compare(forms[i]) && i < 4)
			i++;
	if (i == 4)
		throw(BadFormException());
	else
		(this->*functionsPtr[i])(formTarget);
}

std::string Intern::createName(std::string str)
{
	int idx = str.find(' ');

	if (idx == -1)
		throw(BadFormException());
	str[0] = toupper(str[0]);
	str[idx + 1] = toupper(str[idx + 1]);
	str.erase(idx, 1);
	return (str);
}

Form *Intern::makeForm(std::string formName, std::string formTarget)
{
	try
	{
		std::string userInput = createName(formName);
		Form_creation(userInput, formTarget);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (this->_ret);
}