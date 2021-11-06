# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: pacovali <pacovali@codam.student.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/10/23 10:42:55 by pacovali      #+#    #+#                  #
#    Updated: 2021/10/23 13:35:32 by pacovali      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME=scav

CXX=@clang++

CXXFLAGS= -Wall -Wextra -Werror -std=c++98

SRC= ClapTrap.cpp ScavTrap.cpp FragTrap.cpp main.cpp

HDR= -I.

OBJ=$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) -o $@ $^

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re