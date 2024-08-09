# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/06 10:55:44 by nazouz            #+#    #+#              #
#    Updated: 2024/07/07 14:38:49 by nazouz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=			BraiiiiiiinnnzzzZ

CPP				=			c++

CPPFLAGS		=			-Wall -Wextra -Werror

INCLUDES		=			Zombie.hpp

SRCS			=			main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

OBJS			=			$(SRCS:.cpp=.o)

all : $(NAME)

%.o : %.cpp $(INCLUDES)
	$(CPP) -c $(CPPFLAGS) $< -o $@

$(NAME) : $(OBJS)
	$(CPP) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all
