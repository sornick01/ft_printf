#include "libft.h"

static int	numlen_dec(int n)
{
	int	count;

	count = 0;
	if (n < 0)
		count++;
	while (n)
	{
		count++;
		n /= 10;
	}
	return (count);
}

int	ft_putnbr_fd(int n, int fd)
{
	char	c;
	int		num;

	num = numlen_dec(n);
	if (n == -2147483648)
	{
		ft_putstr_fd("-2", fd);
		ft_putnbr_fd(147483648, fd);
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else if (n >= 10)
	{
		c = (n % 10) + '0';
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(c, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
	return (num);
}
