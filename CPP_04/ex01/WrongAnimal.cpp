#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : type("WrongAnimal undefined")
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << " WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const & wrongAnimal)
{
	this->type = wrongAnimal.type;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const & rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

void WrongAnimal::makeSound( void ) const
{
	std::cout << "*Sound of undefined WrongAnimal*" << std::endl;
}

std::string WrongAnimal::getType( void ) const
{
	return (this->type);
}
