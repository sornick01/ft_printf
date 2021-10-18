#include "ft_printf.h"

static int	numlen_dec(unsigned int n)
{
	int	count;

	count = 0;
	while (n)
	{
		count++;
		n /= 10;
	}
	return (count);
}

int	ft_put_uns_nbr_fd(unsigned int n, int fd)
{
	char	c;
	int		num;

	num = numlen_dec(n);
	if (n >= 10)
	{
		c = (n % 10) + '0';
		ft_put_uns_nbr_fd(n / 10, fd);
		ft_putchar_fd(c, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
	return (num);
}
