#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Fixed default constructor called" << std::endl;
	this->_rawNumber = 0;
}

Fixed::~Fixed(void)
{
	std::cout << "Fixed destructor called" << std::endl;
}

Fixed::Fixed(Fixed &toBeCopied)
{
	std::cout << "Fixed copy constructor called" << std::endl;
	*this = toBeCopied;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits function called" << std::endl;
	return (this->_rawNumber);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits function called" << std::endl;
	this->_rawNumber = raw;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Copy operator called" << std::endl;
	this->_rawNumber = rhs.getRawBits();
}
