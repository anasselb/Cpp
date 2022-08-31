# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/23 16:01:18 by ael-bach          #+#    #+#              #
#    Updated: 2022/08/26 09:41:07 by ael-bach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex03
SRCS = main.cpp  ClapTrap.cpp ScavTrap.cpp Fragtrap.cpp DiamondTrap.cpp
FLAG = -std=c++98 -Wall -Wextra -Werror -Wshadow

all : ${NAME}

${NAME} : ${SRCS}
	c++  ${SRCS} ${FLAG} -o ${NAME}

clean :
	rm -rf *.o
fclean : clean
	rm -rf ${NAME}
re : fclean all