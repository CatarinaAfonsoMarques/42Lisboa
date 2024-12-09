NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Werror -Wextra

SRC = ft_printf.c \

OBJECTS =  $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	@echo "Compiling Libft"
	@ar rcs $(NAME) $(OBJECTS)
	@echo "Done!"

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJECTS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re