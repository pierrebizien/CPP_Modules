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


//////////////////// Comparison operators //////////////////// 

bool	Fixed::operator>(const Fixed &myFixed)
{	
	return (this->getRawBits() > myFixed.getRawBits());
}

bool	Fixed::operator<(const Fixed &myFixed)
{	
	return (this->getRawBits() < myFixed.getRawBits());
}

bool	Fixed::operator>=(const Fixed &myFixed)
{	
	return (this->getRawBits() >= myFixed.getRawBits());
}

bool	Fixed::operator<=(const Fixed &myFixed)
{	
	return (this->getRawBits() <= myFixed.getRawBits());
}

bool	Fixed::operator==(const Fixed &myFixed)
{	
	return (this->getRawBits() == myFixed.getRawBits());
}

bool	Fixed::operator!=(const Fixed &myFixed)
{	
	return (this->getRawBits() != myFixed.getRawBits());
}

//////////////////// Arithmetic operators //////////////////// 

Fixed	Fixed::operator+(const Fixed &myFixed)
{
	Fixed	result(this->toFloat() + myFixed.toFloat());
		
	return (result);
}

Fixed	Fixed::operator-(const Fixed &myFixed)
{
	Fixed	result(this->toFloat() - myFixed.toFloat());
	
	return (result);
}

Fixed	Fixed::operator*(const Fixed &myFixed)
{
	Fixed	result(this->toFloat() * myFixed.toFloat());
	
	return (result);
}

Fixed	Fixed::operator/(const Fixed &myFixed)
{
	Fixed	result(this->toFloat() / myFixed.toFloat());
	
	return (result);
}

//////////////////// Inc./Dec. operators //////////////////// 
			
Fixed	&	Fixed::operator++(void)  //Prefix increment operator. 
{
	++this->_rawNumber;
	return(*this);
}

Fixed	Fixed::operator++(int)  //Postfix increment operator.
{
	Fixed	temp = *this;
	
	++this->_rawNumber;
	return(temp);
}

Fixed	&	Fixed::operator--(void)
{
	--this->_rawNumber;
	return(*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp = *this;
	
	--this->_rawNumber;
	return(temp);
}

//////////////////// Static members functions ////////////////////

Fixed	&	Fixed::_min(Fixed &nbFix_1, Fixed &nbFix_2)
{
	if (nbFix_1 > nbFix_2)
		return (nbFix_2);
	return (nbFix_1);
}

const Fixed	&	Fixed::_min_const(const Fixed &nbFix_1, const Fixed &nbFix_2)
{
	if (nbFix_1.getRawBits() > nbFix_2.getRawBits())
		return (nbFix_2);
	return (nbFix_1);
}

Fixed	&	Fixed::_max(Fixed &nbFix_1, Fixed &nbFix_2)
{
	if (nbFix_1 > nbFix_2)
		return (nbFix_1);
	return (nbFix_2);
}

const Fixed	&	Fixed::_max_const(const Fixed &nbFix_1, const Fixed &nbFix_2)
{
	if (nbFix_1.getRawBits() > nbFix_2.getRawBits())
		return (nbFix_1);
	return (nbFix_2);
}


std::ostream &	operator<<(std::ostream &output, const Fixed &myFixed)
{
	output << myFixed.toFloat();
	return (output);
}