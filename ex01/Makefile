# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/19 12:13:27 by rbourgea          #+#    #+#              #
#    Updated: 2021/07/23 09:28:55 by rbourgea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 		serialize

SRCS =		main.cpp \
			serialize.cpp

OBJS = 		$(SRCS:%.cpp=%.o)

INC			= -I./

CFLAGS =	-Wall -Wextra -Werror

all:		$(NAME)

$(NAME):	$(OBJS)
			clang++ $(CFLAGS) $(INC) $(OBJS) -o $(NAME)

clean:		
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all