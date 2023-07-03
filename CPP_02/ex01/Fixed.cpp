#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_rawNumber = 0;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &toBeCopied)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = toBeCopied;
}

Fixed::Fixed(int intValue)
{
	std::cout << "Int constructor called" << std::endl;
	this->_rawNumber = intValue << this->_fracBits;
}

Fixed::Fixed(float floatValue)
{
	std::cout << "Float constructor called" << std::endl;
	this->_rawNumber = roundf((1 << this->_fracBits) * floatValue);
}

int Fixed::getRawBits(void) const
{
	return (this->_rawNumber);
}

void Fixed::setRawBits(int const raw)
{
	this->_rawNumber = raw;
}

float Fixed::toFloat( void ) const 
{
	return ((float)this->_rawNumber / (1 << this->_fracBits));
}

int Fixed::toInt( void ) const
{
	return ((int)(this->_rawNumber >> this->_fracBits));
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Copy operator called" << std::endl;
	this->_rawNumber = rhs.getRawBits();
	return (*this);
}

std::ostream &	operator<<(std::ostream &output, const Fixed &myFixed)
{
	output << myFixed.toFloat();
	return (output);
}
