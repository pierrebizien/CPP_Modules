#include "AAnimal.hpp"

AAnimal::AAnimal( void ) : type("undefined")
{
	std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::~AAnimal( void )
{
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal::AAnimal( AAnimal const & Aanimal)
{
	this->type = Aanimal.type;
}

AAnimal &AAnimal::operator=(AAnimal const & rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

std::string AAnimal::getType( void ) const
{
	return (this->type);
}
