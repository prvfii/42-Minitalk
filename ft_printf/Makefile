NAME = libftprintf.a
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
LIBC = ar rcs

SRCS = ft_base.c ft_char.c ft_printf.c ft_str.c
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	$(LIBC) $(NAME) $(OBJS) $(LIBFT_DIR)/*.o

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all
