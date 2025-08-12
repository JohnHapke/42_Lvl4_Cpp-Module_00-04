# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/12 10:53:32 by johnhapke         #+#    #+#              #
#    Updated: 2025/08/12 11:47:27 by johnhapke        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= brain

SRC= main.cpp

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
