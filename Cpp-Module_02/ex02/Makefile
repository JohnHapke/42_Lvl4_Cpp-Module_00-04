# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/10 09:00:59 by johnhapke         #+#    #+#              #
#    Updated: 2025/09/10 09:04:13 by johnhapke        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= ex02

SRC= main.cpp \
	Fixed.cpp

OBJ= $(SRC:.cpp=.o)

FLAGS= -Wextra -Wall -Werror -std=c++98

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

re:	fclean all

.PHONY: all clean fclean re
