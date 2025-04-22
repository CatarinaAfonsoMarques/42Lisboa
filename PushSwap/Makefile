NAME = push_swap.a

CC = cc
CFLAGS = -Wall -Werror -Wextra

SRC = push_swap.c\

OBJECTS =  $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	@echo "Compiling push_swap..."
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