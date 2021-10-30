# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/12 13:07:16 by anclarma          #+#    #+#              #
#    Updated: 2021/10/30 18:27:21 by anclarma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= zombie
CPP_FILES	= main.cpp				\
			  Zombie.cpp			\
			  newZombie.cpp			\
			  randomChump.cpp
SRCS		= $(CPP_FILES)
OBJS		= $(SRCS:.cpp=.o)
DEPS		= $(OBJS:.o=.d)
CC			= clang++
CFLAGS		= -Wall -Wextra -Werror	\
			  -std=c++98			\
			  -MMD -MP
LFLAGS		= -Wall -Wextra -Werror
CINCLUDES	=
CLIBS		=

all:		$(NAME)

%.o:%.cpp
			$(CC) $(CFLAGS) $(CINCLUDES) -c $< -o $@

$(NAME):	$(LIBFT) $(OBJS)
			$(CC) $(OBJS) $(LFLAGS) $(CLIBS) -o $@

clean:
			rm -f $(OBJS) $(DEPS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

-include	$(DEPS)

.PHONY:		all clean fclean re
