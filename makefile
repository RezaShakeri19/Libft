NAME = libft.a
SRC = ft_isdigit.c ft_isalpha.c ft_isprint.c ft_isascii.c
OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror

%.o: %.c
	cc $(CFLAGS) -c $< -o $@


all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
