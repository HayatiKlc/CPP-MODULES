# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hkilic <hkilic@student.42kocaeli.com.tr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/09 12:17:49 by hkilic            #+#    #+#              #
#    Updated: 2023/05/09 12:17:50 by hkilic           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Orthodox
SRCS = *.cpp
CMP = c++
FLAGS = -Wall -Wextra -Werror

all:$(NAME)

$(NAME):
	$(CMP) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean : clean

re: fclean all