#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog( void );
		~Dog ( void );
		Dog (Dog const & dog);
		Dog& operator=(const Dog & rhs);

		void makeSound( void ) const;
		std::string getIdea(int index) const;
		void setIdea(int index, std::string ideaToBeSet);

	private:
		Brain *_brain;
};

#endif