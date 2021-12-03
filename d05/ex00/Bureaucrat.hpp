#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Exception {
};

class Bureaucrat {
	public:
		Bureaucrat(void);
		Bureaucrat(int grade);
		Bureaucrat(Bureaucrat const& src);
		Bureaucrat& operator=(Bureaucrat const& rhs);
		~Bureaucrat(void);
		std::string getName(void) const;
		int getGrade(void) const;
		void	downgrade(void);
		void	promotion(void);
		Exception GradeTooLowException;
		Exception GradeTooHighException;
	private:
		std::string const _name;
		int _grade;
};

std::ostream& operator<<(std::ostream& out, Bureaucrat const& rhs);

#endif