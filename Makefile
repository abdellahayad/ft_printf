CC = cc

FLAG = -Wall -Werror -Wall

SRC = ft_printf.c ft_putadd.c ft_putchar.c ft_puthexa.c ft_putnbr.c ft_putstr.c ft_putunsigned.c 

OBJ = $(SRC:.c=.o)

NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJ)

%.o: %.c ft_printf.h
	$(CC) $(FLAG) -c $< -o $@
	ar rcs $(NAME) $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all