#ifndef CAT_H
#define CAT_H

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	public:
		Cat( void );
		~Cat ( void );
		Cat (Cat const & cat);
		Cat& operator=(const Cat & rhs);

		void makeSound( void ) const;
		std::string getIdea(int index) const;
		void setIdea(int index, std::string ideaToBeSet);
		
	private:
		Brain *_brain;

};

#endif