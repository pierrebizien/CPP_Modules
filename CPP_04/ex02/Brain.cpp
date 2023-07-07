#include "Brain.hpp"

Brain::Brain ( void )
{
	std::cout << "Brain constructor called" << std::endl;

}

Brain::~Brain ( void )
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain ( Brain const & toBeCopied)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = toBeCopied;
}

Brain & Brain::operator=(Brain const & rhs)
{
	std::cout << "Brain assignement operator called" << std::endl;
	int i = 0;

	while (i < 100)
	{
		this->_ideas[i] = rhs._ideas[i];
		i++;
	}
	return (*this);
}

std::string Brain::getIdea(int index)
{
	return (this->_ideas[index]);
}
void Brain::setIdea(int index, std::string ideaToBeSet)
{
	this->_ideas[index] = ideaToBeSet;
}

