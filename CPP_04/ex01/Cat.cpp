#include "Cat.hpp"

Cat::Cat( void ) : Animal()
{
	this->type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
	this->_brain = new Brain();
}

Cat::~Cat( void )
{
	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
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