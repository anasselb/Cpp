
NAME = ex02
SRCS = main.cpp Array.cpp
FLAG = -std=c++98 -Wall -Wextra -Werror -fsanitize=address -g

all : ${NAME}

${NAME} : ${SRCS}
	c++  ${SRCS} ${FLAG} -o ${NAME}

clean :
	rm -rf *.o
fclean : clean
	rm -rf ${NAME}
re : fclean all