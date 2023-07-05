#include "Cat.hpp"

Cat::Cat( void ) : Animal()
{
	this->type = "Cat";
	this->_brain = new Brain();
	std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat( void )
{
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
}

void Cat::makeSound( void ) const
{
	std::cout << "Mieow Mieow" << std::endl;
}

Cat& Cat::operator=(const Cat & rhs) 
{
	if (this != &rhs)
	{
		Animal::operator=(rhs);
	}
	return (*this);
}