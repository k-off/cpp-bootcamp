# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: pacovali <pacovali@codam.student.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/10/24 09:36:23 by pacovali      #+#    #+#                  #
#    Updated: 2021/10/24 13:14:20 by pacovali      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = interface

CXX = @clang++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp AMateria.cpp Ice.cpp Cure.cpp Character.cpp MateriaSource.cpp

OBJ = $(SRC:.cpp=.o)

HDR = -I.

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) -o $@ $^

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
