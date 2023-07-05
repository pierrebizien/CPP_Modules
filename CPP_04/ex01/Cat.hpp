#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat( void );
		~Cat ( void );
		Cat (Cat & cat);
		Cat& operator=(const Cat & rhs);

		void makeSound( void ) const;
		std::string getIdea(int index);
		void setIdea(int index);
		
	private:
		Brain *_brain;

};

#endif