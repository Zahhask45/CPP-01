#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{
	this->weapon = NULL;
}

HumanB::~HumanB()
{
}


void	HumanB::attack()
{
	if (this->weapon == NULL)
	{
		std::cout << this->name << " attacks with nothing and failed "
					<< std::endl;
	}
	else
	{
		std::cout << this->name << " attacks with their "
					<< (*(this->weapon)).getType() << std::endl;
	}
}

void HumanB::setWeapon(Weapon &new_weapon)
{
	this->weapon = &new_weapon;
}
