# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/27 14:07:28 by johnhapke         #+#    #+#              #
#    Updated: 2025/08/28 09:21:16 by johnhapke        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= harlFilter

SRC= main.cpp \
	Harl.cpp

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
