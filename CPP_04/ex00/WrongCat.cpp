#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal()
{
	this->type = "WrongCat";
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound( void ) const
{
	std::cout << "Mieow Mieow" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat & rhs) 
{
	if (this != &rhs)
	{
		WrongAnimal::operator=(rhs);
	}
	return (*this);
}