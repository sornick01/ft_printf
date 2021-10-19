NAME = libftprintf.a

FILES = ft_printf.c ft_put_uns_nbr_fd.c print_specifier.c putadress_fd.c puthex_fd.c

OBJ = $(FILES:%.c=%.o)

DEPS = $(OBJ:%.o=%.d)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	make -C libft_edit
	cp libft_edit/libft.a ./$(NAME)
	ar rcs $(NAME) $(OBJ)

-include $(DEPS)
%.o : %.c
	$(CC) $(CFLAGS) -MMD -c $< -o $@

clean:
	rm -f $(OBJ) $(DEPS)
	make clean -C libft_edit

fclean: clean
	rm -f $(NAME)
	make fclean -C libft_edit
re: fclean all

.PHONY: all clean fclean bonus
