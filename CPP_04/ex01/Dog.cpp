#include "Dog.hpp"

Dog::Dog( void ) : Animal()
{
	this->type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
	this->_brain = new Brain();
}

Dog::~Dog( void )
{
	
	delete _brain;
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound( void ) const
{
	std::cout << "Wouf Wouf" << std::endl;
}


void Dog::setIdea( int index, std::string ideaToBeSet )
{
	this->_brain->setIdea(index, ideaToBeSet);
}

std::string Dog::getIdea( int index ) const
{
	return (this->_brain->getIdea(index));
}

Dog& Dog::operator=(const Dog & rhs)
{
	if (this != &rhs)
	{
		Animal::operator=(rhs);
	}
	return (*this);
}