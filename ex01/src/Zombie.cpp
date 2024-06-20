#include "Zombie.hpp"

void	Zombie::set_name(std::string new_name)
{
	this->_name = new_name;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name) : _name(name)
{
	announce();
}

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << "I am dead, wait how does that work???" <<std::endl;
}
