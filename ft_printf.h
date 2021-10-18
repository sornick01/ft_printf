#ifndef FT_PRINTF_H
# define FT_PRINTF_H

// # include <stdlib.h>
# include "libft/libft.h"
# include <stdarg.h>
# include <stdio.h> //убрать

int	ft_printf(const char *format, ...);
int	print_specifier(char type, va_list *args);
int	ft_put_uns_nbr_fd(unsigned int n, int fd);

#endif