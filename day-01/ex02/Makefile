# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: pacovali <pacovali@codam.student.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/10/17 15:09:21 by pacovali      #+#    #+#                  #
#    Updated: 2021/10/17 16:20:44 by pacovali      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = ref_ptr

CXX = @clang++

CXXFLAGS= -Wall -Wextra -Werror -std=c++98

SRC = main.cpp

OBJ = main.o

HDR = -I.

all: $(NAME)
$(NAME):
	$(CXX) -c $(CXXFLAGS) $(SRC) $(HDR)
	$(CXX) -o $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME) .DS_Store ../.DS_Store

re: fclean all

PHONY: all clean fclean re
