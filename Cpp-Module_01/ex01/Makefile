# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/11 12:20:10 by johnhapke         #+#    #+#              #
#    Updated: 2025/08/11 16:15:55 by johnhapke        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= moar_brainz

SRC= main.cpp \
	Zombie.cpp \
	zombieHorde.cpp

OBJ= $(SRC:.cpp=.o)

FLAGS= -Wall -Wextra -Werror -std=c++98
CC= c++

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
		rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME)

re: fclean
	all

.PHONY: all clean fclean re
