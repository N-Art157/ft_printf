NAME = libftprintf.a
SRCS = ft_printf.c ft_putchar_fd.c ft_putnbr_base_fd.c ft_putnbr_base_p.c ft_putnbr_fd.c ft_putstr_fd.c ft_strlen.c ft_itoa.c
OBJS = $(SRCS:%.c=%.o)
CC = cc
CFLAGS = -Wall -Werror -Wextra

$(NAME):$(OBJS)
		ar rc $(NAME) $(OBJS)

all:$(NAME)

clean:
		rm -f $(OBJS)

fclean:clean
		rm -f $(NAME)

re:fclean all