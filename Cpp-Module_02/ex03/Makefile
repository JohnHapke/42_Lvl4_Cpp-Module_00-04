# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: johnhapke <johnhapke@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/20 07:18:26 by johnhapke         #+#    #+#              #
#    Updated: 2025/11/20 07:26:52 by johnhapke        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= triangle

SRC= .../

OBJ= $(SRC:.cpp=.o)

FLAGS= -Werror, -Wall, -Wextra, -std=c++98

CC= c++

all: $(NAME)
	$(FLAGS) $(CC) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(FLAGS) $(CC) -c $< -o $@


clean:
		rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME)

re:		ffclean all

.PHONY: all clean fclean re
