/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeanuts <mpeanuts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 19:01:38 by mpeanuts          #+#    #+#             */
/*   Updated: 2021/10/19 19:01:39 by mpeanuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	count;

	if (!s)
	{
		count = 6;
		write(fd, "(null)", count);
	}
	else
	{
		count = ft_strlen(s);
		write(fd, s, count);
	}
	return (count);
}
