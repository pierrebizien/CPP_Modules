#ifndef WRONGCAT_H
#define WRONGCAT_H

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat( void );
		~WrongCat ( void );
		WrongCat (WrongCat & wrongCat);
		WrongCat& operator=(const WrongCat & rhs);

		void makeSound( void ) const;

};

#endif