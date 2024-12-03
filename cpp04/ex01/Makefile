# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: umosse <umosse@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/02 15:38:50 by umosse            #+#    #+#              #
#    Updated: 2024/12/03 15:42:29 by umosse           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
NAME = IDWTSTWOF
SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp
OBJS = $(SRCS:.cpp=.o)
CXXFLAGS = -Wall -Werror -Wextra -g3 -std=c++98
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS) 
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re: fclean all

.PHONY : all clean fclean re