#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter{
	public:
		Character(void);
		Character(std::string name);
		~Character(void);
		Character& operator=(Character const& rhs);
		AMateria *inventory[4];

		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
		//constructor with name as parameter
		//copy deep

	private:
		std::string _name;
};

#endif