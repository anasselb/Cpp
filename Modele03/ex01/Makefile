# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/23 16:01:18 by ael-bach          #+#    #+#              #
#    Updated: 2022/08/26 11:36:40 by ael-bach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex01
SRCS = main.cpp  ClapTrap.cpp ScavTrap.cpp
FLAG = -std=c++98 -Wall -Wextra -Werror

all : ${NAME}

${NAME} : ${SRCS}
	c++  ${SRCS} ${FLAG} -o ${NAME}

clean :
	rm -rf *.o
fclean : clean
	rm -rf ${NAME}
re : fclean all