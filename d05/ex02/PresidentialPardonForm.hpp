#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {
	public :
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const& src);
		PresidentialPardonForm& operator=(PresidentialPardonForm const& rhs);
		~PresidentialPardonForm(void);
		virtual void execute(Bureaucrat const & executor) const;
	private:
		PresidentialPardonForm(void);

};

#endif