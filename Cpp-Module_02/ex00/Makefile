# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/29 08:01:51 by johnhapke         #+#    #+#              #
#    Updated: 2025/09/01 13:58:07 by johnhapke        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name= fix

SRC= main.cpp \
	Fixed.cpp

OBJ = $(SRC:.cpp=.o)

FLAGS= -Wall -Werror -Wextra -std=c++98

CC= c++

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(FLAGS) -$(OBJ) -o $(NAME)

%.o: %.cpp
		$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re