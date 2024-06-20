#include <iostream>
#include <string>
#include "Zombie.hpp"

int main()
{
	Zombie	stack_zombie("STACK ZOMBIE");
	Zombie	*heap_zombie = newZombie("HEAP ZOMBIE");

	randomChump("RANDOM CHUMP ZOMBIE");
	delete heap_zombie;
	return (0);
}