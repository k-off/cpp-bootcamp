# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: pacovali <pacovali@cstudent.codam.nl>        +#+                      #
#                                                    +#+                       #
#    Created: 2021/10/31 20:33:09 by pacovali      #+#    #+#                  #
#    Updated: 2021/10/31 20:33:15 by pacovali      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME=reinterpret_cast

CXX = @clang++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp

OBJ = $(SRC:.cpp0=.o)

INC = -I.

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) -o $@ $^

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
