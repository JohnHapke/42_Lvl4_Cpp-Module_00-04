# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/08 07:52:38 by johnhapke         #+#    #+#              #
#    Updated: 2025/09/08 07:57:11 by johnhapke        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= ex01

SRC= main.cpp \
	Fixed.cpp

OBJ= $(SRC:.cpp=.o)

FLAGS= -Werror -Wall -Wextra -std=c++98
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

re: fclean all

.PHONY: all clean fclean re
