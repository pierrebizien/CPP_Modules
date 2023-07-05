#include "Dog.hpp"

Dog::Dog( void ) : Animal()
{
	this->type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog( void )
{
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound( void ) const
{
	std::cout << "Wouf Wouf" << std::endl;
}

Dog& Dog::operator=(const Dog & rhs)
{
	if (this != &rhs)
	{
		Animal::operator=(rhs);
	}
	return (*this);
}