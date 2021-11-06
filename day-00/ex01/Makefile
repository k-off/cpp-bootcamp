# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: pacovali <pacovali@codam.student.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/10/16 10:19:52 by pacovali      #+#    #+#                  #
#    Updated: 2021/10/16 15:29:55 by pacovali      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CXX = @clang++

CXXFLAGS= -Wall -Wextra -Werror -std=c++98

SRC = Phonebook.cpp Contact.cpp main.cpp

OBJ = Phonebook.o Contact.o main.o

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
