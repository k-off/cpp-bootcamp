# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: pacovali <pacovali@cstudent.codam.nl>        +#+                      #
#                                                    +#+                       #
#    Created: 2021/11/02 18:13:45 by pacovali      #+#    #+#                  #
#    Updated: 2021/11/02 18:17:54 by pacovali      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = funciton_templates

CXX = @clang++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

HDR =-I.

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) -o $@ $^

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
