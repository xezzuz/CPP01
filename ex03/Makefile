# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/06 12:48:28 by nazouz            #+#    #+#              #
#    Updated: 2024/07/07 14:39:26 by nazouz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=			UnnecessaryViolence

CPP				=			c++

CPPFLAGS		=			-Wall -Wextra -Werror

INCLUDES		=			HumanA.hpp HumanB.hpp Weapon.hpp

SRCS			=			main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

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
