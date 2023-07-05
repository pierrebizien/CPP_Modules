#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog( void );
		~Dog ( void );
		Dog (Dog & dog);
		Dog& operator=(const Dog & rhs);

		void makeSound( void ) const;
};

#endif