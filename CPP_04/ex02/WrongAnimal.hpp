#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>
#include <string>

class WrongAnimal {
	public:
		WrongAnimal( void );
		virtual ~WrongAnimal ( void );
		WrongAnimal (WrongAnimal const & wrongAnimal);
		WrongAnimal& operator=(const WrongAnimal & rhs);

		void makeSound( void ) const;
		std::string getType( void ) const;
	protected:
		std::string type;
};

#endif