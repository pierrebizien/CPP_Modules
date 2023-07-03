#include "Fixed.hpp"

int	main(void)
{
	Fixed a(1);
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c;
	Fixed const d(Fixed( 5.05f ));
	
	std::cout << "a : " << a << std::endl;
	std::cout << "++a : " << ++a << std::endl;
	std::cout << "a : " << a << std::endl;
	std::cout << "a++ : " << a++ << std::endl;
	// std::cout << a << std::endl;
	c = a + b;
	std::cout << "c : " << c << std::endl;


	std::cout << Fixed::_max(a, c) << std::endl;
	std::cout << "\n\n b : " << b << std::endl;
	std::cout << "d : " << d << std::endl;
	std::cout << Fixed::_max_const(b, d) << std::endl;
	
	return (0);
}