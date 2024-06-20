#include "Harl.hpp"

std::string const	Harl::_complains[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug( void )
{
    std::cout << "[DEBUG]" << std::endl << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
    std::cout << "[INFO]" << std::endl << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning( void )
{
    std::cout << "[WARNING]" << std::endl << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
    std::cout << "[ERROR]" << std::endl << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
	void	(Harl::*_levels[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	size_t	index = -1;

	for (size_t i = 0; i < 4; i++)
	{
		if (level == _complains[i]){
			index = i;
			break ;
		}
	}

	switch (index)
	{
		case (0):
			for (int i = index; i < 4; i++)
				(this->*_levels[i])();
			break;
		case (1):
			for (int i = index; i < 4; i++)
				(this->*_levels[i])();
			break;
		case (2):
			for (int i = index; i < 4; i++)
				(this->*_levels[i])();
			break;
		case (3):
			for (int i = index; i < 4; i++)
				(this->*_levels[i])();
			break;
	
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
	
}
