# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/28 14:15:39 by ael-bach          #+#    #+#              #
#    Updated: 2022/07/31 11:37:28 by ael-bach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
SRC = megaphone.cpp
CFLAG = -std=c++98 -Wall -Wextra -Werror

all : ${NAME}

${NAME} : ${SRC}
	c++ ${SRC} ${CFLAG} -o ${NAME}

clean :
	rm -rf *.o
fclean : clean
	rm -rf ${NAME}
re : fclean all