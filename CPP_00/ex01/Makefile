SRCS +=  main.cpp
SRCS +=  PhoneBook.class.cpp
SRCS +=  Contact.class.cpp

OBJS = ${SRCS:.cpp=.o}

NAME = PhoneBook

.cpp.o:
	c++ -c -Wall -Werror -Wextra -std=c++98 $< -o ${<:.cpp=.o}

all: ${NAME}

${NAME}: ${OBJS} Contact.class.hpp PhoneBook.class.hpp
	c++ -g -Wall -Werror -Wextra -std=c++98 ${OBJS} -o ${NAME}

clean: 
	rm -rf *.o

fclean: clean
	rm -rf ${NAME}

re: fclean all
 