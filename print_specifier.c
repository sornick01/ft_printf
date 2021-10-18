#include "ft_printf.h"

int	print_specifier(char type, va_list *args)
{
	int	printed;

	// if (!format || !(*format) || !argc)
	// 	return (-1);
	if (type == 'd' || type == 'i')
		printed = ft_putnbr_fd(va_arg(*args, int), 1);
	else if (type == 'c')
		printed = ft_putchar_fd((char)va_arg(*args, int), 1);
	else if (type == 's')
		printed = ft_putstr_fd(va_arg(*args, char *), 1);
	else if (type == '%')
		printed = ft_putchar_fd('%', 1);
	else if (type == 'u')
		printed = ft_put_uns_nbr_fd(va_arg(*args, unsigned int), 1);
	return (printed);
}
