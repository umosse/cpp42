# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: umosse <umosse@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/05 12:22:59 by umosse            #+#    #+#              #
#    Updated: 2024/11/05 17:10:16 by umosse           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
NAME = PhoneBook
SRCS = Contact.cpp main.cpp Phonebook.cpp
OBJS = $(SRCS:.c=.o)
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