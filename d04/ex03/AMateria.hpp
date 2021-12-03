#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;
class AMateria
{
	public:
		AMateria(void);
		AMateria(std::string const& type);
		AMateria(AMateria const& src);
		virtual ~AMateria(void);
		AMateria& operator=(AMateria& rhs);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

	protected:
		std::string _type;
};

#endif