#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {

	public:
		ClapTrap( std::string name );
		~ClapTrap( void );
		ClapTrap( ClapTrap & toBeCopied);
		ClapTrap& operator=(ClapTrap const & rhs);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	private:
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		id_t		_attackDamage;

};

#endif