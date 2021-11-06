# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: pacovali <pacovali@codam.student.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/10/19 20:53:21 by pacovali      #+#    #+#                  #
#    Updated: 2021/10/21 20:59:56 by pacovali      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME=fixed

CXX = @clang++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Fixed.cpp Point.cpp bsp.cpp

OBJ = $(SRC:.cpp=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) -o $@ $^

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all
