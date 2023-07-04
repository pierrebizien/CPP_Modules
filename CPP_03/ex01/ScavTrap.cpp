#include "ScavTrap.hpp"

ScavTrap::ScavTrap (std::string name) : ClapTrap(name)
{	
	this->_attackDamage = 20;
	this->_energyPoints = 50;
	this->_hitPoints = 100;
	std::cout << "ScavTrap constructor called" << std::endl;
	
}

ScavTrap::~ScavTrap ()
{	
	std::cout << "ScavTrap destructor called" << std::endl;
	
}

ScavTrap::ScavTrap(ScavTrap& toBeCopied) : ClapTrap(toBeCopied)
{

}

ScavTrap &ScavTrap::operator=(ScavTrap const & rhs)
{
	(void)rhs;
	return (*this);
}


void	ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap " << this->_name <<" entered guardGate mode" << std::endl;

}

void	ScavTrap::attack( std::string target )
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "ScavTrap " <<this->_name << " is dead and therefore cannot do anything !" << std::endl;
		return ;
	}
	else if (this->_energyPoints <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " is out of energy and therefore cannot attack !" << std::endl;
		return ;
	}
	else
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target<< ", causing "<< this->_attackDamage<< " points of damage!" << std::endl;
		this->_energyPoints--;
	}
}
