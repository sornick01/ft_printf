/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_specifier.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeanuts <mpeanuts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 19:02:31 by mpeanuts          #+#    #+#             */
/*   Updated: 2021/10/19 19:02:32 by mpeanuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_specifier(char type, va_list *args)
{
	int	printed;

	printed = 0;
	if (!args)
		return (0);
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
	else if (type == 'x')
		printed = put_low_hex_fd(va_arg(*args, int), 1);
	else if (type == 'X')
		printed = put_up_hex_fd(va_arg(*args, int), 1);
	else if (type == 'p')
		printed = putadress_fd(va_arg(*args, void *), 1);
	return (printed);
}
