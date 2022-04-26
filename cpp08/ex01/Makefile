# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/20 14:26:00 by anclarma          #+#    #+#              #
#    Updated: 2022/02/21 20:28:31 by anclarma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= span
C_DIR		= .
O_DIR		= objs
C_FILES		= main.cpp					\
			  Span.cpp
SRCS		= $(patsubst %, $(C_DIR)/%, $(C_FILES))
O_FILES		= $(C_FILES:.cpp=.o)
OBJS		= $(patsubst %, $(O_DIR)/%, $(O_FILES))
CXX			= c++
MAKE		= make
RM			= rm -f
MKDIR		= mkdir -p
CXXFLAGS	= -Wall -Wextra -Werror		\
			  -std=c++98				\
			  -MMD -MP
LFLAGS		= -Wall -Wextra -Werror
CINCLUDES	= -I ./includes
CLIBS		=

all:		$(NAME)

$(O_DIR)/%.o: $(C_DIR)/%.cpp
			$(CXX) $(CXXFLAGS) $(CINCLUDES) -c $< -o $@

$(O_DIR):
			$(MKDIR) $(O_DIR)

$(NAME):	$(O_DIR) $(OBJS)
			$(CXX) $(OBJS) $(LFLAGS) $(CLIBS) -o $@

clean:
			$(RM) -r $(O_DIR)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

-include	$(OBJS:.o=.d)

.PHONY:		all clean fclean re
