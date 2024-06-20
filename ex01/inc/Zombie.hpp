#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
    std::string	_name;
public:
    Zombie(std::string name);
    Zombie();
    ~Zombie();
	void	set_name(std::string new_name);
	void	announce(void);
};

void	set_name(std::string new_name);
Zombie* zombieHorde(int N, std::string name);

#endif