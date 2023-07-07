#ifndef BRAIN_H
#define BRAIN_H

#include <string>

#include <iostream>


class Brain 
{
	public:
		Brain( void );
		~Brain( void );
		Brain ( Brain const & toBeCopied);
		Brain& operator=(Brain const & rhs); 
		
		std::string getIdea(int index);
		void setIdea(int index, std::string ideaToBeSet);
	private:
		std::string _ideas[100];
	
};



#endif