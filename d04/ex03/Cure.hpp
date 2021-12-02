#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria{
	public:
		Cure(void);
		Cure(std::string const& type);
		Cure(Cure const& src);
	
		Cure& operator=(Cure const& rhs);
		~Cure(void);
		virtual AMateria* clone(void) const;
		virtual void use(ICharacter& target);

	private:
};

#endif