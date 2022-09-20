# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/19 11:24:00 by jpizarro          #+#    #+#              #
#    Updated: 2022/09/21 01:48:13 by jpizarro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re run show

NAME = philo

SRC = .
OBJ = obj

SRCS = $(wildcard $(SRC)/*.c) $(wildcard $(SRC)/utils/*.c)
OBJS = $(OBJ)/$(SRCS:.c=.o)

CC = gcc

RM = rm -f

#CFLAGS = -Wall -Werror -Wextra
CFLAGS = -Wall -Werror -Wextra -g
PFLAGS = -pthread

all: $(NAME)

$(NAME): $(OBJS) $(STATICS)
	@echo "Creating $@"
	@$(CC) $(CFLAGS) $(PFLAGS) $(OBJS) -o $@
	@echo "$@ is ready!"

$(OBJ)/%.o: $(SRC)/%.c
	@$(CC) $(CFLAGS) $(PFLAGS) -c $< -o $@
	
clean:
	@echo "Cleaing up binary files"
	@$(RM) $(OBJS)

fclean: clean
	@echo "also $(NAME)"
	@$(RM) $(NAME) debug
	@$(RM) $(wildcard srcs/*.o)
	@$(RM) $(wildcard *.out)

re: fclean all

show:
	@echo "SRCS $(SRCS)"
	@echo "OBJS $(OBJS)"
	@echo "LIBS $(LIBS)"
	@echo "STATICS $(STATICS)"
	
