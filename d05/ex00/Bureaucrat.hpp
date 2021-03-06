#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>


class Bureaucrat {
	public:
		Bureaucrat(void);
		Bureaucrat(int grade);
		Bureaucrat(Bureaucrat const& src);
		Bureaucrat& operator=(Bureaucrat const& rhs);
		~Bureaucrat(void);
		std::string getName(void) const;
		int 		getGrade(void) const;
		void		downgrade(void);
		void		promotion(void);
		class HighException : public std::exception {
				virtual const char *what(void) const throw() {
					return ("Grade too high");
				}
		};
		class LowException : public std::exception {
				virtual const char *what(void) const throw() {
					return ("Grade too low");
				}
		};
	private:
		std::string const _name;
		int _grade;
};

std::ostream& operator<<(std::ostream& out, Bureaucrat const& rhs);

#endif