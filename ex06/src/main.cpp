#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl	harl;
	
	if (argc != 2){
		std::cout << "Wrong arguments" << std::endl;
		return (1);
	}
	harl.complain(argv[argc - 1]);

	return (0)	;
}
