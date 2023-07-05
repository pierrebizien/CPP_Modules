#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	{
		ClapTrap Tyson("Tyson");
		ScavTrap Fury("Fury");
		FragTrap Joshua("Joshua");
		Tyson.takeDamage(10);
		Joshua.takeDamage(10);
		Fury.takeDamage(10);
		Fury.attack("Pierre");
		Tyson.attack("Pierre");
		Joshua.attack("Pierre");
		Fury.takeDamage(90);
		Joshua.takeDamage(90);
		Fury.attack("Pierre");
		Joshua.attack("Pierre");


	}
	std::cout << std::endl << std::endl;

	{
		ClapTrap Tyson("Tyson");
		ScavTrap Fury("Fury");
		FragTrap Joshua("Joshua");

		Joshua.highFivesGuys();
		
		Tyson.beRepaired(10);
		Fury.beRepaired(10);
		Joshua.beRepaired(10);
		Tyson.takeDamage(109);
		Joshua.takeDamage(109);
		Fury.takeDamage(109);
		Fury.attack("Pierre");
		Joshua.attack("Pierre");
		Tyson.attack("Pierre");
	}

	


	

}