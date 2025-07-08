# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhapke <jhapke@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/22 14:35:22 by jhapke            #+#    #+#              #
#    Updated: 2025/07/08 12:24:23 by jhapke           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= phonebook

SRC= PhoneBook.cpp \
	main.cpp

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