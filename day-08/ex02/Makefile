# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: pacovali <pacovali@cstudent.codam.nl>        +#+                      #
#                                                    +#+                       #
#    Created: 2021/11/06 10:54:17 by pacovali      #+#    #+#                  #
#    Updated: 2021/11/06 10:59:07 by pacovali      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = mutant_stack

CXX = @clang++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp mutantstack.cpp
OBJ=$(SRC:.cpp=.o)
INC=-I.

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) -o $@ $^

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
