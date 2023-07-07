#include "Cat.hpp"

Cat::Cat( void ) : AAnimal()
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

Cat::Cat( Cat const & tobeCopied) : AAnimal()
{
	this->_brain = NULL;
	std::cout << "Cat copy constructor called" << std::endl;
	*this = tobeCopied;
}

void Cat::makeSound( void ) const
{
	std::cout << "Mieow Mieow" << std::endl;
}


void Cat::setIdea( int index, std::string ideaToBeSet )
{
	this->_brain->setIdea(index, ideaToBeSet);
}

std::string Cat::getIdea( int index ) const
{
	return (this->_brain->getIdea(index));
}

Cat& Cat::operator=(const Cat & rhs)
{
	std::cout << "Assignement operator called (Cat)" << std::endl;
	if (this != &rhs)
	{
		if (!this->_brain)
			this->_brain = new Brain();
		*(this->_brain) = *(rhs._brain);
		this->type = rhs.type;
	}
	return (*this);
}