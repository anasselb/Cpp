# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/29 16:17:31 by ael-bach          #+#    #+#              #
#    Updated: 2022/07/30 20:19:09 by ael-bach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
SRC = main.cpp Contact.cpp PhoneBook.cpp
CFLAG = -std=c++98 -Wall -Wextra -Werror

all : ${NAME}

${NAME} : ${SRC}
	c++ $(CFLAG) ${SRC} -o ${NAME}

clean :
	rm -rf *.o
fclean : clean
	rm -rf ${NAME}
re : fclean all