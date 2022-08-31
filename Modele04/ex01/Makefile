# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/26 17:23:08 by ael-bach          #+#    #+#              #
#    Updated: 2022/08/27 16:10:55 by ael-bach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex01
SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp
FLAG = -std=c++98 -Wall -Wextra -Werror

all : ${NAME}

${NAME} : ${SRCS}
	c++  ${SRCS} ${FLAG} -o ${NAME}

clean :
	rm -rf *.o
fclean : clean
	rm -rf ${NAME}
re : fclean all