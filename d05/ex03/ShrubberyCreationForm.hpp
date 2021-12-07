#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class Form;
class ShrubberyCreationForm : public Form {
	public :
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const& src);
		ShrubberyCreationForm& operator=(ShrubberyCreationForm const& rhs);
		~ShrubberyCreationForm(void);
		virtual void execute(Bureaucrat const & executor) const;

	private :
		ShrubberyCreationForm(void);
};

#endif