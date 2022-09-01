#
# Created by Anass El bacha on 8/30/22.
#

NAME = ex02
SRCS = main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp
FLAG = -std=c++98 -Wall -Wextra -Werror

all : ${NAME}

${NAME} : ${SRCS}
	c++  ${SRCS} ${FLAG} -o ${NAME}

clean :
	rm -rf *.o
fclean : clean
	rm -rf ${NAME}
re : fclean all