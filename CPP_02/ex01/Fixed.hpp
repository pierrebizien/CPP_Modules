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

	private:
		int _rawNumber;
		static const int _fracBits = 8;
};

std::ostream &operator<<(std::ostream & o, Fixed const & rhs);
#endif