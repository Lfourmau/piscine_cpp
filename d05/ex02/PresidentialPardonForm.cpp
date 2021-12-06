#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialForm", target, 25, 5)
{
}
PresidentialPardonForm::~PresidentialPardonForm(void) {};

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getExecGrade() < executor.getGrade())
		throw(GradeTooLowException());
	std::cout << this->getTarget() << "  has been pardoned by Zafod Beeblebrox" << std::endl;
}