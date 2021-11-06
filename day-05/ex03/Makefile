# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: pacovali <pacovali@codam.student.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/10/28 20:35:28 by pacovali      #+#    #+#                  #
#    Updated: 2021/10/30 14:54:01 by pacovali      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = intern

CXX = @clang++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =	main.cpp Bureaucrat.cpp Form.cpp \
		ShrubberyCreationForm.cpp RobotomyRequestForm.cpp \
		PresidentialPardonForm.cpp Intern.cpp

OBJ = $(SRC:.cpp=.o)

HDR = -I.

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) -o $@ $^

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME) *_shrubbery

re: fclean all

.PHONY: all clean fclean re
