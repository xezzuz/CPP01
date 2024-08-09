# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/06 11:20:30 by nazouz            #+#    #+#              #
#    Updated: 2024/07/07 14:39:17 by nazouz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=			MoarBrainz

CPP				=			c++

CPPFLAGS		=			-Wall -Wextra -Werror

INCLUDES		=			Zombie.hpp

SRCS			=			main.cpp Zombie.cpp zombieHorde.cpp

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
