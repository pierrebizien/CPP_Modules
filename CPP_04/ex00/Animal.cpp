#include "Animal.hpp"

Animal::Animal( void ) : type("undefined")
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal( void )
{
	std::cout << " Animal destructor called" << std::endl;
}

Animal::Animal( Animal const & animal)
{
	this->type = animal.type;
}

Animal &Animal::operator=(Animal const & rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

void Animal::makeSound( void ) const
{
	std::cout << "*Sound of undefined animal*" << std::endl;
}

std::string Animal::getType( void ) const
{
	return (this->type);
}
