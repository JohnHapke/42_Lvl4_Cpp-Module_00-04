# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhapke <jhapke@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/22 14:34:53 by jhapke            #+#    #+#              #
#    Updated: 2025/06/22 16:29:11 by jhapke           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= megaphone

SRC= megaphone.cpp

OBJ= $(SRC:.cpp=.o)

FLAGS= -Wall -Wextra -Werror -std=c++98
CC= c++

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
		$(CC) $(FLAGS) -c $< -o $@

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re