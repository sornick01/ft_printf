#include "ft_printf.h"


int	ft_printf(const char *format, ...)
{
	int		printed;
	va_list	args;

	if (!format)
		return (-1);
	va_start(args, format);
	printed = 0;
	while (*format)
	{
		if (*format != '%')
		{
			printed += ft_putchar_fd((char)*format, 1);
		}
		else
		{
			printed += print_specifier(*(char *)(++format), &args);
		}
		format++;
	}
	va_end(args);
	return (printed);
}
