# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/13 17:13:37 by ael-bach          #+#    #+#              #
#    Updated: 2022/08/14 18:11:38 by ael-bach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex03
SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
FLAG = -std=c++98 -Wall -Wextra -Werror

all : ${NAME}

${NAME} : ${SRCS}
	c++  ${SRCS} ${FLAG} -o ${NAME}

clean :
	rm -rf *.o
fclean : clean
	rm -rf ${NAME}
re : fclean all