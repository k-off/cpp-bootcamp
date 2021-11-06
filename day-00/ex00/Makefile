# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: pacovali <pacovali@codam.student.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/10/16 10:19:52 by pacovali      #+#    #+#                  #
#    Updated: 2021/10/16 10:57:09 by pacovali      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CXX = @clang++

CXXFLAGS= -Wall -Wextra -Werror -std=c++98

SRC = megaphone.cpp

OBJ = megaphone.o

HDR = -I .

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
