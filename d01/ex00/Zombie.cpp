#include "Zombie.hpp"

Zombie::Zombie(void) {};
Zombie::~Zombie(void) 
{
	std::cout << this->_name << "destroyed" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* newZombie( std::string name )
{
	return ;
}