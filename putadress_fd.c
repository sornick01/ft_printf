/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putadress_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeanuts <mpeanuts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 19:02:33 by mpeanuts          #+#    #+#             */
/*   Updated: 2021/10/19 19:02:34 by mpeanuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	numlen_hex(unsigned long long n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		count++;
		n /= 16;
	}
	return (count);
}

static int	put_adr_hex_fd(unsigned long long n, int fd)
{
	char	c;
	int		num;

	num = numlen_hex(n);
	if (n >= 16)
	{
		if ((n % 16) < 10)
			c = (n % 16) + '0';
		else
			c = (n % 16) - 10 + 'a';
		put_adr_hex_fd(n / 16, fd);
		ft_putchar_fd(c, fd);
	}
	else if (n < 10)
		ft_putchar_fd(n + '0', fd);
	else
		ft_putchar_fd(n - 10 + 'a', fd);
	return (num);
}

int	putadress_fd(void *adr, int fd)
{
	unsigned long long	hex;
	int					printed;

	if (!adr)
	{
		printed = ft_putstr_fd("0x0", fd);
	}
	else
	{
		hex = (unsigned long long)adr;
		printed = ft_putstr_fd("0x", fd);
		printed += put_adr_hex_fd(hex, fd);
	}
	return (printed);
}
