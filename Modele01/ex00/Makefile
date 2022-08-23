# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/13 14:53:42 by ael-bach          #+#    #+#              #
#    Updated: 2022/08/14 18:11:50 by ael-bach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex00
SRCS = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp 
FLAG = -std=c++98 -Wall -Wextra -Werror

all : ${NAME}

${NAME} : ${SRCS}
	c++  ${SRCS} ${FLAG} -o ${NAME}

clean :
	rm -rf *.o
fclean : clean
	rm -rf ${NAME}
re : fclean all