SRCS +=  megaphone.cpp

OBJS = ${SRCS:.cpp=.o}

NAME = megaphone

.cpp.o:
	c++ -c -Wall -Werror -Wextra -std=c++98 $< -o ${<:.cpp=.o}

all: ${NAME}

${NAME}: ${OBJS}
	c++ -g -Wall -Werror -Wextra -std=c++98 ${OBJS} -o ${NAME}

clean: 
	rm -rf *.o

fclean: clean
	rm -rf ${NAME}

re: fclean all
 