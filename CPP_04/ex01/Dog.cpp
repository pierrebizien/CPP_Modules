#include "Dog.hpp"
#include "Brain.hpp"

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

Dog::Dog( Dog const & tobeCopied)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = tobeCopied;
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
	std::cout << "Assignement operator called (Dog)" << std::endl;
	if (this != &rhs)
	{
		if (!this->_brain)
			this->_brain = new Brain();
		*(this->_brain) = *(rhs._brain);
		this->type = rhs.type;
	}
	return (*this);
}