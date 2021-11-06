# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: pacovali <pacovali@cstudent.codam.nl>        +#+                      #
#                                                    +#+                       #
#    Created: 2021/11/03 20:11:15 by pacovali      #+#    #+#                  #
#    Updated: 2021/11/03 20:16:04 by pacovali      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = easy_find

CXX = @clang++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

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
