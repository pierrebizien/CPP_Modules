SRCS +=  main.cpp
SRCS +=  ClapTrap.cpp
SRCS +=  ScavTrap.cpp
SRCS +=  FragTrap.cpp


OBJS = ${SRCS:.cpp=.o}

NAME = ex02

.cpp.o:
	g++ -c -Wall -Werror -Wextra -std=c++98 $< -o ${<:.cpp=.o}

all: ${NAME}

${NAME}: ${OBJS} 
	g++ -g -Wall -Werror -Wextra -std=c++98 ${OBJS} -o ${NAME}

clean: 
	rm -rf *.o

fclean: clean
	rm -rf ${NAME}

re: fclean all
 