# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/22 10:36:01 by johnhapke         #+#    #+#              #
#    Updated: 2026/01/04 14:14:59 by johnhapke        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= ClapTrap

SRC= main.cpp \
	ClapTrap.cpp

OBJ= $(SRC:.cpp=.o)

FLAGS= -Wall -Werror -Wextra -std=c++98
CC= c++

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
