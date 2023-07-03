#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <math.h>

class Fixed {
	public:
		Fixed( void );
		~Fixed( void );
		Fixed(int intValue);
		Fixed(float floatValue);
		Fixed (const Fixed & n);
		Fixed& operator=(Fixed const & rhs);

		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int	toInt( void ) const;
		
		Fixed	operator+(const Fixed &myFixed);
		Fixed	operator-(const Fixed &myFixed);
		Fixed	operator*(const Fixed &myFixed);
		Fixed	operator/(const Fixed &myFixed);

		bool	operator>(const Fixed &myFixed);
		bool	operator<(const Fixed &myFixed);
		bool	operator>=(const Fixed &myFixed);
		bool	operator<=(const Fixed &myFixed);
		bool	operator==(const Fixed &myFixed);
		bool	operator!=(const Fixed &myFixed);

		Fixed	&	operator++(void);				//Prefix increment operator.
		Fixed	operator++(int);					//Postfix increment operator.
		Fixed	&	operator--(void);				//Prefix decrement operator.
		Fixed	operator--(int);					//Postfix decrement operator.
		
		static Fixed		&	_min(Fixed &nbFix_1, Fixed &nbFix_2);
		static const Fixed	&	_min_const(const Fixed &nbFix_1, const Fixed &nbFix_2);
		static Fixed		&	_max(Fixed &nbFix_1, Fixed &nbFix_2);
		static const Fixed	&	_max_const(const Fixed &nbFix_1, const Fixed &nbFix_2);

	private:
		int _rawNumber;
		static const int _fracBits = 8;
};

std::ostream &operator<<(std::ostream & o, Fixed const & rhs);
#endif