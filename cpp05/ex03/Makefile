# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/07 23:33:35 by anclarma          #+#    #+#              #
#    Updated: 2021/11/15 19:29:48 by anclarma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= bureaucrat
C_DIR		= .
O_DIR		= objs
C_FILES		= main.cpp						\
			  Bureaucrat.cpp				\
			  Form.cpp						\
			  ShrubberyCreationForm.cpp		\
			  RobotomyRequestForm.cpp		\
			  PresidentialPardonForm.cpp	\
			  Intern.cpp
SRCS		= $(patsubst %, $(C_DIR)/%, $(C_FILES))
O_FILES		= $(C_FILES:.cpp=.o)
OBJS		= $(patsubst %, $(O_DIR)/%, $(O_FILES))
CC			= gcc
CXX			= c++
MAKE		= make
RM			= rm -f
MKDIR		= mkdir -p
CFLAGS		= -Wall -Wextra -Werror		\
			  -MMD -MP
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
