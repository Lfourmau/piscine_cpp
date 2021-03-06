#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form{
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const& src);
		RobotomyRequestForm& operator=(RobotomyRequestForm const& rhs);
		~RobotomyRequestForm(void);
		virtual void execute(Bureaucrat const & executor) const;
	private:
		RobotomyRequestForm(void);
};

#endif