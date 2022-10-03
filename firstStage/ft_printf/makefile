NAME	= libftprintf.a

SRC		= ft_printf.c \
			util.c

OBJS	= $(SRCS:%.c=%o)

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