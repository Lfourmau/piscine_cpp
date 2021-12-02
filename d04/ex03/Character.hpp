#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter{
	public:
		Character(void);
		Character(std::string name);
		Character(Character const& src);
		~Character(void);
		Character& operator=(Character const& rhs);

		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
		AMateria *inventory[4];

	private:
		void inc_slot(void);
		std::string _name;
		int _slot;
};

#endif