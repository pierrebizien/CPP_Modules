#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap 
{
	public:
		FragTrap ( std::string _name);
		~FragTrap( void );
		FragTrap( FragTrap & toBeCopied);
		FragTrap& operator=(FragTrap const & rhs);
		
		void highFivesGuys(void);
};



#endif