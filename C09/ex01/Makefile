SRCS = ft_putchar.c ft_putstr.c ft_strlen.c ft_strcmp.c ft_swap.c
OBJS = $(SRCS:.c=.o)
INCS = includes
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
LIBC = ar rc
LIBR = ranlib

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS)
	$(LIBR) $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -I $(INCS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
