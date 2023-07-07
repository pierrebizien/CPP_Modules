SRCS +=  main.cpp
SRCS +=  Dog.cpp
SRCS +=  Cat.cpp
SRCS +=  AAnimal.cpp
SRCS +=  WrongAnimal.cpp
SRCS +=  WrongCat.cpp
SRCS +=  Brain.cpp



OBJS = ${SRCS:.cpp=.o}

NAME = ex02

.cpp.o:
	g++ -c -Wall -Werror -Wextra -std=c++98 $< -o ${<:.cpp=.o}

all: ${NAME}

${NAME}: ${OBJS} AAnimal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp
	g++ -g -Wall -Werror -Wextra -std=c++98 ${OBJS} -o ${NAME}

clean: 
	rm -rf *.o

fclean: clean
	rm -rf ${NAME}

re: fclean all
 