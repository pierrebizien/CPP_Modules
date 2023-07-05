SRCS +=  main.cpp
SRCS +=  Dog.cpp
SRCS +=  Cat.cpp
SRCS +=  Animal.cpp
SRCS +=  WrongAnimal.cpp
SRCS +=  WrongCat.cpp
SRCS +=  Brain.cpp



OBJS = ${SRCS:.cpp=.o}

NAME = ex00

.cpp.o:
	g++ -c -Wall -Werror -Wextra -std=c++98 $< -o ${<:.cpp=.o}

all: ${NAME}

${NAME}: ${OBJS} Animal.hpp Cat.hpp Dog.hpp WrongAnimal.cpp WrongCat.cpp
	g++ -g -Wall -Werror -Wextra -std=c++98 ${OBJS} -o ${NAME}

clean: 
	rm -rf *.o

fclean: clean
	rm -rf ${NAME}

re: fclean all
 