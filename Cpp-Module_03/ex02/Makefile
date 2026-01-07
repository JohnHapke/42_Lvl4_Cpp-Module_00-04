# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/05 15:04:03 by johnhapke         #+#    #+#              #
#    Updated: 2026/01/06 17:17:31 by johnhapke        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= FragTrap

SRC= main.cpp \
	ClapTrap.cpp \
	ScavTrap.cpp \
	FragTrap.cpp

OBJ= $(SRC:.cpp=.o)

FLAGS= -Wall -Werror -Wextra -std=c++98
CC = c++

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
		$(CC) $(FLAGS) -c $< -o $@

clean:
		rm -rf $(OBJ)

fclean:	clean
		rm -rf $(NAME)

re:		fclean all

.PHONY: all clean fclean re
