# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/13 16:22:07 by ael-bach          #+#    #+#              #
#    Updated: 2022/08/14 18:11:46 by ael-bach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex01
SRCS = main.cpp  zombieHorde.cpp Zombie.cpp 
FLAG = -std=c++98 -Wall -Wextra -Werror

all : ${NAME}

${NAME} : ${SRCS}
	c++  ${SRCS} ${FLAG} -o ${NAME}

clean :
	rm -rf *.o
fclean : clean
	rm -rf ${NAME}
re : fclean all