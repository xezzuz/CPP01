# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/06 12:35:44 by nazouz            #+#    #+#              #
#    Updated: 2024/07/07 14:39:22 by nazouz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=			HI_THIS_IS_BRAIN

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
