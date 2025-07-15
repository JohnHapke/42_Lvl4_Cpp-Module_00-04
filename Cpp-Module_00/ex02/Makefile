# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhapke <jhapke@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/10 13:44:14 by jhapke            #+#    #+#              #
#    Updated: 2025/07/14 10:48:12 by jhapke           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= account

SRC= Account.cpp \
	tests.cpp

OBJ= $(SRC:.cpp=.o)

FLAGS= -Werror -Wextra -Wall -std=c++98
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