#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria{
	public:
		Ice(void);
		Ice(std::string const& type);
		Ice(Ice const& src);
		Ice& operator=(Ice const& rhs);
		~Ice(void);
		virtual AMateria* clone(void) const;
		virtual void use(ICharacter& target);

	private:
};

#endif