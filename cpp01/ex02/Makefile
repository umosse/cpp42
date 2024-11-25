# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: umosse <umosse@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/12 16:50:52 by umosse            #+#    #+#              #
#    Updated: 2024/11/12 16:51:21 by umosse           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
NAME = HiThisIsBrain
SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)
CFLAGS = -Wall -Werror -Wextra -g3 -std=c++98
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS) 
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re: fclean all

.PHONY : all clean fclean re