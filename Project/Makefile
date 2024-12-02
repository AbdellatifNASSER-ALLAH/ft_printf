CC = cc
CFALGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rcs

NAME = libftprintf.a
SRC = ft_printf.c src/ft_putchar.c src/ft_puthex.c src/ft_putnbr.c src/ft_putstr.c \
	utils/ft_utils.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $@ $?

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
.SECONDARY: $(OBJ)
