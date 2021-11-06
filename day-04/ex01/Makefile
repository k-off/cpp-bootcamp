# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: pacovali <pacovali@codam.student.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/10/23 14:13:24 by pacovali      #+#    #+#                  #
#    Updated: 2021/10/23 16:22:32 by pacovali      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME=dynamic_poly

CXX = @clang++

CXXFLAGS= -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp

HDR = -I.

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) -o $@ $^

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
