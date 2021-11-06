# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: pacovali <pacovali@codam.student.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/10/16 17:23:07 by pacovali      #+#    #+#                  #
#    Updated: 2021/10/16 17:24:34 by pacovali      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = account

CXX = @clang++

CXXFLAGS= -Wall -Wextra -Werror -std=c++98

SRC = Account.cpp tests.cpp

OBJ = Account.o tests.o

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
