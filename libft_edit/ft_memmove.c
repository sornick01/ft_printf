/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeanuts <mpeanuts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 19:01:18 by mpeanuts          #+#    #+#             */
/*   Updated: 2021/10/19 19:01:19 by mpeanuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!dst && !src)
		return (NULL);
	if (len == 0)
	{
		return (dst);
	}
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	else
	{
		while (--len != 0)
		{
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
		}
		((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
		return (dst);
	}
}
