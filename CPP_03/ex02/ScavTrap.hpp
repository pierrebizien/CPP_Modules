#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap 
{
	public:
		ScavTrap ( std::string _name);
		~ScavTrap( void );
		ScavTrap( ScavTrap & toBeCopied);
		ScavTrap& operator=(ScavTrap const & rhs);
		
		void guardGate( void );
		void attack( std::string target );

};



#endif