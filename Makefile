NAME        = libftprintf.a
CC          = cc
CFLAGS      = -Wall -Wextra -Werror
AR          = ar rcs
RM          = rm -f

LIBFT_DIR   = libft
LIBFT_A     = $(LIBFT_DIR)/libft.a

SRCS        = ft_printf.c \
              ft_check_format.c \
              ft_print_char.c \
              ft_print_str.c \
              ft_print_nbr.c \
              ft_print_unsigned.c \
              ft_print_hex.c \
              ft_print_ptr.c

OBJS        = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C $(LIBFT_DIR)
	cp $(LIBFT_A) $(NAME)
	$(AR) $(NAME) $(OBJS)


%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -I$(LIBFT_DIR) -c $< -o $@

clean:
	$(RM) $(OBJS)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re