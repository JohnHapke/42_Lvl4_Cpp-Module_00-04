# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/12 11:31:27 by johnhapke         #+#    #+#              #
#    Updated: 2025/08/12 11:49:42 by johnhapke        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= violence

SRC= main.cpp \
	Weapon.cpp \
	HumanA.cpp \
	HumanB.cpp

OBJ= $(SRC:.cpp=.o)

FLAGS= -Wextra -Wall -Werror -std=c++98
CC = c++

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
		rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
