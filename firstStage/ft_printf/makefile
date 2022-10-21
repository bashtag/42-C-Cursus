NAME	= libftprintf.a

SRCS		= ft_printf.c \
			ft_putnbr.c \
			ft_putstr.c \
			ft_strlen.c \
			ft_hexputnbr.c \
			ft_putmem.c \
			ft_uputnbr.c

OBJS	= $(SRCS:%.c=%.o)

FLAGS	= -Wall -Werror -Wextra

$(NAME):
	gcc $(FLAGS) -c $(SRCS) -I ./
	ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all