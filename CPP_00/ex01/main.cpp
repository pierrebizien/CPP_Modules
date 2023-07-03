#include <iostream>
#include <iomanip>
#include "PhoneBook.class.hpp"

int	parse_input (const std::string buffer, PhoneBook *instance)
{
	(void) instance;
	(void) buffer;
	if (buffer.compare("ADD") == 0)
	{
		(*instance).ft_add();
	}
	if (buffer.compare("SEARCH") == 0)
	{
		(*instance).ft_search();
	}
	if (buffer.compare("EXIT") == 0)
	{
		return (1);
	}
	return (0);
}

int	main ( void )
{
	PhoneBook instance;
	std::string buffer;
	std::cout << ">";
	while (getline(std::cin, buffer))
	{
		if (parse_input(buffer, &instance))
			break;
		std::cout << ">";
	}
	// std::cout << std::setw(10);
	// std::cout << "Nibgbrtgtrgrtgrtrco" ;
	return (0);
}