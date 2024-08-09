# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/06 13:30:18 by nazouz            #+#    #+#              #
#    Updated: 2024/07/07 14:39:30 by nazouz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=			SedIsForLosers

CPP				=			c++

CPPFLAGS		=			-Wall -Wextra -Werror

SRCS			=			main.cpp

OBJS			=			$(SRCS:.cpp=.o)

all : $(NAME)

%.o : %.cpp
	$(CPP) -c $(CPPFLAGS) $< -o $@

$(NAME) : $(OBJS)
	$(CPP) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all
