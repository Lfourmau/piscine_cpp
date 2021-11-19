#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie{
	public:
		Zombie(void);
		~Zombie(void);
		void announce(void);
		Zombie* newZombie( std::string name );

	private:
		std::string _name;
};

#endif