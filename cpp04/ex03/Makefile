# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anclarma <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/04 22:00:06 by anclarma          #+#    #+#              #
#    Updated: 2022/02/17 16:09:10 by anclarma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= materia
C_DIR		= .
O_DIR		= objs
C_FILES		= main.cpp					\
			  AMateria.cpp				\
			  Ice.cpp					\
			  Cure.cpp					\
			  Character.cpp				\
			  MateriaSource.cpp
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

check:		all

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
