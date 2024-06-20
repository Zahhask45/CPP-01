#include "Zombie.hpp"

int	main()
{
	int N = 10;
	Zombie	*horde;

	horde = zombieHorde(N, "BANANA Zombie");
	delete []horde;
	return (0);
}