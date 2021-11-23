#ifndef WEAPON_H
# define WEAPON_H
#include <iostream>

class Weapon {
	public:
		Weapon(std::string weaponInit) : _type(weaponInit) {};
		~Weapon(void);
		std::string getType(void);
		void		setType(std::string);

	private:
		std::string _type;
};

#endif