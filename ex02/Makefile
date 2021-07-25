# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/19 12:13:27 by rbourgea          #+#    #+#              #
#    Updated: 2021/07/25 18:58:37 by rbourgea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 		base

SRCS =		main.cpp \
			base.cpp

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