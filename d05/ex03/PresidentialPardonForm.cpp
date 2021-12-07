#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialForm", target, 25, 5)
{
}
PresidentialPardonForm::~PresidentialPardonForm(void) {};
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& src) : Form("President", "defaultTarget", 72, 45)
{
	operator=(src);
}
PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const&rhs)
{
	(void)rhs;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getExecGrade() < executor.getGrade())
		throw(GradeTooLowException());
	else if (this->getSigned() == 0)
		throw(NoSignedException());
	std::cout << this->getTarget() << "  has been pardoned by Zafod Beeblebrox" << std::endl;
}