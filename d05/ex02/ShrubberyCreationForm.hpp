#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class Form;
class ShrubberyCreationForm : public Form {
	public :
		ShrubberyCreationForm(void);
		~ShrubberyCreationForm(void);
		virtual void execute(Bureaucrat const & executor) const;

	private :
};

#endif