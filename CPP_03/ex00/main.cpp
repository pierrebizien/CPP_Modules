#include "ClapTrap.hpp"

int main()
{
	ClapTrap instance("Tyson");

	instance.attack("Pierre");
	instance.takeDamage(5);
	instance.takeDamage(5);
	instance.beRepaired(10);

	ClapTrap instance2 ("Fury");
	instance2.beRepaired(5);
	instance2.beRepaired(5);
	instance2.beRepaired(5);
	instance2.beRepaired(5);
	instance2.beRepaired(5);
	instance2.beRepaired(5);
	instance2.beRepaired(5);
	instance2.beRepaired(5);
	instance2.beRepaired(5);
	instance2.beRepaired(5);
	instance2.beRepaired(5);

	ClapTrap instance3 ("Mayweather");
	instance3.beRepaired(5);
	instance3.takeDamage(11);
	instance3.beRepaired(5);



	

}