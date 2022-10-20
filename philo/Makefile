# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/19 11:24:00 by jpizarro          #+#    #+#              #
#    Updated: 2022/10/20 21:29:27 by jpizarro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re run show

NAME = philo

SRCS =	$(wildcard *.c) $(wildcard utils/*.c)

OBJS = $(SRCS:.c=.o)

#STATICS = $(LIBS:.h=.a)

CC = gcc

RM = rm -f

#CFLAGS = -Wall -Werror -Wextra
CFLAGS = -Wall -Werror -Wextra -g

all: $(NAME)

$(NAME): $(OBJS) $(STATICS)
	@echo "Creating $@"
	@$(CC) $(CFLAGS) $(OBJS) $(STATICS) -o $@
	@echo "$@ is ready!"

%.o: %.c
	@$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $(<:.c=.o)

#$(STATICS):
#	cd libft/ && $(MAKE)
#	cd pipex/ && $(MAKE)
#	@make -sC ./libft

clean:
	@echo "Cleaing up binary files"
	@$(RM) $(OBJS)

fclean: clean
	@echo "also $(NAME) and debug files"
	@$(RM) $(NAME) debug
	@$(RM) $(wildcard srcs/*.o)
	@$(RM) $(wildcard *.out)

re: fclean all

git: clean
	git add .
	git commit -m "$m"
	git push