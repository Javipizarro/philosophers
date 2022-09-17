# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/19 11:24:00 by jpizarro          #+#    #+#              #
#    Updated: 2022/09/17 18:14:57 by jpizarro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re run show

NAME = philosophers

CC = gcc

CFLAGS = -Wall -Werror -Wextra -g

SRC = src
SRCS = $(wildcard $(SRC)/*.c)

OBJ = obj
OBJS= $(pathsubst $(SRC)/%.c, $(OBJ)%.o, $(SRCS))
#OBJS = $(SRCS:.c=.o)

LIBS = libft/libft.h #pipex/pipex.h

STATICS = $(LIBS:.h=.a)

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	@echo "Creating $@"
	@$(CC) $(CFLAGS) $(OBJS) -o $@
	@echo "$@ is ready!"

$(OBJ)/%.o: $(SRC)/%.c
	@$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $(<:.c=.o)

#$(STATICS):
#	@make -sC ./libft

clean:
	@echo "Cleaing up binary files"
	@$(RM) $(OBJ)/*.o

fclean: clean
	@echo "also $(NAME) and debug files"
	@$(RM) $(NAME) debug

re: fclean all

show:
	@echo "SRCS $(SRCS)"
	@echo "OBJS $(OBJS)"
	@echo "LIBS $(LIBS)"
	@echo "STATICS $(STATICS)"
	
git: clean
	git add .
	git commit -m "$m"
	git push