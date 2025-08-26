# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/26 09:21:30 by johnhapke         #+#    #+#              #
#    Updated: 2025/08/26 14:54:09 by johnhapke        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= replace

SRC= main.cpp \
	Replacer.cpp

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
