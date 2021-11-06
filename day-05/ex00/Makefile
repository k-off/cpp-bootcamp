# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: pacovali <pacovali@codam.student.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/10/28 20:34:56 by pacovali      #+#    #+#                  #
#    Updated: 2021/10/28 20:34:56 by pacovali      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = bureaucrat

CXX = @clang++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Bureaucrat.cpp

OBJ = $(SRC:.cpp=.o)

HDR = -I.

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) -o $@ $^

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
