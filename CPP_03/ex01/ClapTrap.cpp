#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap constructor called" << std::endl;
	
}

ClapTrap::~ClapTrap ( void )
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const & rhs)
{
	if (this != &rhs)
	{
		this->_hitPoints = rhs._hitPoints;
		this->_name = rhs._name;
		this->_attackDamage = rhs._attackDamage;
		this->_energyPoints = rhs._energyPoints;
	}
	
	return (*this);

}

ClapTrap::ClapTrap( ClapTrap & toBeCopied)
{
	this->_name = toBeCopied._name;
	this->_hitPoints = toBeCopied._hitPoints;
	this->_energyPoints = toBeCopied._energyPoints;
	this->_attackDamage = toBeCopied._attackDamage;

}

void ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << this->_name << " is dead and therefore cannot do anything !" << std::endl;
		return ;
	}
	else if (this->_energyPoints <= 0)
	{
		std::cout << this->_name << " is out of energy and therefore cannot attack !" << std::endl;
		return ;
	}
	else
	{
		std::cout << this->_name << " attacks " << target<< ", causing "<< this->_attackDamage<< " points of damage!" << std::endl;
		this->_energyPoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << this->_name << " is already dead" << std::endl;
	}
	else if (this->_energyPoints <= 0)
	{
		std::cout << this->_name << " no longer have energy" << std::endl;

	}
	else
	{
		std::cout << this->_name << " is taking a hit : " << amount << " HP lost" << std::endl;
		this->_hitPoints -= amount;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << this->_name << " is already dead" << std::endl;
	}
	else if (this->_energyPoints <= 0)
	{
		std::cout << this->_name << " no longer have energy" << std::endl;

	}
	else
	{
		this->_energyPoints--;
		this->_hitPoints += amount;
		std::cout << this->_name << " has repaired itself : " << amount << "HP regained" << std::endl;

	}

}