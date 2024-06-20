#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
	public:
		Harl();
		~Harl();
		void complain(std::string level);
	
	private:
		static std::string const _complains[4];

		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};

#endif