#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed {
	public:
		Fixed( void );
		~Fixed( void );
		Fixed ( Fixed & n);
		Fixed& operator=(Fixed const & rhs);

		int getRawBits( void ) const;
		void setRawBits( int const raw );

	private:
		int _rawNumber;
		static const int fracBits = 8;
};
#endif