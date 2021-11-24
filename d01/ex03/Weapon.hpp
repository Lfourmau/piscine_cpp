#ifndef WEAPON_H
# define WEAPON_H
#include <iostream>

class Weapon {
	public:
		Weapon(std::string weaponInit);
		~Weapon(void);
		std::string const &getType(void);
		void		setType(std::string);

	private:
		std::string _type;
};

#endif