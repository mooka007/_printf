NAME = libftprintf.a

SRC = 	ft_printf.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_putnbr.c 	 \
		ft_putaddr.c 	  \
		ft_unbrput.c 	   \
		hex_convert.c

OBJ = $(SRC:.c=.o)

all:$(NAME)

$(NAME):$(OBJ)
	ar -rc $(NAME) $(OBJ)

%.o:%.c
	gcc -Wall -Wextra -Werror -c $<

clean:
	rm -f $(OBJ)

fclean:clean
	rm -f $(NAME)

re:fclean all
