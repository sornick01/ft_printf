#include "libft.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	count;

	if (!s)
		return (-1);
	count = ft_strlen(s);
	write(fd, s, count);
	return (count);
}
