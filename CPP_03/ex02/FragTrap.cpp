#include "FragTrap.hpp"

FragTrap::FragTrap (std::string name) : ClapTrap(name)
{	
	this->_attackDamage = 30;
	this->_energyPoints = 100;
	this->_hitPoints = 100;
	std::cout << "FragTrap constructor called" << std::endl;
	
}

FragTrap::~FragTrap ()
{	
	std::cout << "FragTrap destructor called" << std::endl;
	
}

FragTrap::FragTrap(FragTrap& toBeCopied) : ClapTrap(toBeCopied)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const & rhs)
{
	this->_name = rhs._name;
	this->_attackDamage = rhs._attackDamage;
	this->_energyPoints = rhs._energyPoints;
	this->_hitPoints = rhs._hitPoints;
	return (*this);
}

void FragTrap::highFivesGuys ( void )
{
	if (this->_hitPoints <= 0)
		std::cout << this->_name << " is dead and cannot high five" << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << this->_name << " is out of energy, cannot high five" << std::endl;
	else
		std::cout << this->_name << " wants to high five" << std::endl;
}


