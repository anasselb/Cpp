# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/31 11:38:33 by ael-bach          #+#    #+#              #
#    Updated: 2022/07/31 13:29:45 by ael-bach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account
SRC = Account.cpp tests.cpp
CFLAG = -std=c++98

all : ${NAME}

${NAME} : ${SRC}
	c++ ${SRC} ${CFLAG} -o ${NAME}

clean :
	rm -rf *.o
fclean : clean
	rm -rf ${NAME}
re : fclean all