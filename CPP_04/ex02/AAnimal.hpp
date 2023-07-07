#ifndef AANIMAL_H
#define AANIMAL_H

#include <iostream>
#include <string>

class AAnimal {
	public:
		AAnimal( void );
		virtual ~AAnimal ( void );
		AAnimal (AAnimal const & Aanimal);
		AAnimal& operator=(const AAnimal & rhs);

		virtual void makeSound( void ) const = 0;
		std::string getType( void ) const;
	protected:
		std::string type;
};

#endif