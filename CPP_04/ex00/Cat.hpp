#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat( void );
		~Cat ( void );
		Cat (Cat & cat);
		Cat& operator=(const Cat & rhs);

};

#endif