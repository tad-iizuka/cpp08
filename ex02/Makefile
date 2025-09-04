# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tiizuka <tiizuka@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/30 12:48:36 by tiizuka           #+#    #+#              #
#    Updated: 2025/09/04 14:17:54 by tiizuka          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of target
NAME		=	ex02

# Source, object files
SRCS 		=	main.cpp Log.cpp

OBJS		=	$(SRCS:.cpp=.o)

# Compiler setting
CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -pedantic -g -std=c++98

# Remove command
RM			= rm

all:		${NAME}

$(NAME) :	$(OBJS)
			$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
			$(CXX) $(CXXFLAGS) -c $< -o $@

# Rule for cleaning object files
clean:
ifneq		("$(wildcard $(OBJS))", "")
			rm $(OBJS)
endif

# Rule for full clean
fclean:		clean
ifneq		("$(wildcard $(NAME))", "")
			rm -f $(NAME)
endif

# Rule for re-build
re:			fclean all

# Phony targets
.PHONY:		all clean fclean re
