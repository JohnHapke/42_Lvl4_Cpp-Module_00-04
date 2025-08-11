# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/11 09:39:28 by johnhapke         #+#    #+#              #
#    Updated: 2025/08/11 11:58:55 by johnhapke        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= brainz

SRC= Zombie.cpp \
	newZombie.cpp \
	randomChump.cpp \
	main.cpp

OBJ= $(SRC:.cpp=.o)

FLAGS= -Werror -Wextra -Wall -std=c++98

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

re:	fclean all

.PHONY: all clean fclean re
