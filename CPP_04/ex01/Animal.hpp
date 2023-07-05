#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

class Animal {
	public:
		Animal( void );
		virtual ~Animal ( void );
		Animal (Animal const & animal);
		Animal& operator=(const Animal & rhs);

		virtual void makeSound( void ) const;
		std::string getType( void ) const;
	protected:
		std::string type;
};

#endif