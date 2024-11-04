NAME = libft.a

CC = cc
CFLAGS = -Wall -Werror -Wextra
OBJDIR = build/
INCDIR = includes/


SRC = ft_isalnum.c ft_isalpha.c ft_isascii.c \
		   ft_isdigit.c ft_isprint.c ft_strlcat.c \
		   ft_strlcpy.c ft_strlen.c ft_strncmp.c \
		   ft_strnstr.c ft_atoi.c\

OBJECTS = $(addprefix $(OBJDIR), $(SRC:.c=.o))

all: $(NAME)

$(NAME): $(OBJDIR) $(OBJECTS)
	@echo "Compiling Libft"
	@ar rcs $(NAME) $(OBJECTS)
	@echo "Done!"

$(OBJDIR):
	@mkdir -p $(dir $(OBJECTS))

$(OBJDIR)%.o: $(SRC)%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJDIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re