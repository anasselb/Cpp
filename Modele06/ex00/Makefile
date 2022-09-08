
NAME = convert
SRCS = main.cpp Convert.cpp
FLAG = -std=c++98 -Wall -Wextra -Werror

all : ${NAME}

${NAME} : ${SRCS}
	c++  ${SRCS} ${FLAG} -o ${NAME}

clean :
	rm -rf *.o
fclean : clean
	rm -rf ${NAME}
re : fclean all