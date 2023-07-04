#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	{
		ClapTrap Tyson("Tyson");
		ScavTrap Fury("Fury");
		Tyson.takeDamage(10);
		Fury.takeDamage(10);
		Fury.attack("Pierre");
		Tyson.attack("Pierre");
		Fury.takeDamage(90);
		Fury.attack("Pierre");


	}
	std::cout << std::endl << std::endl;

	{
		ClapTrap Tyson("Tyson");
		ScavTrap Fury("Fury");
		Tyson.beRepaired(10);
		Fury.beRepaired(10);
		Tyson.takeDamage(109);
		Fury.takeDamage(109);
		Fury.attack("Pierre");
		Tyson.attack("Pierre");
	}

	


	

}