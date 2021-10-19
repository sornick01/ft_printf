/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeanuts <mpeanuts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 19:02:23 by mpeanuts          #+#    #+#             */
/*   Updated: 2021/10/19 19:23:03 by mpeanuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft_edit/libft.h"
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	print_specifier(char type, va_list *args);
int	ft_put_uns_nbr_fd(unsigned int n, int fd);
int	put_up_hex_fd(unsigned int n, int fd);
int	put_low_hex_fd(unsigned int n, int fd);
int	putadress_fd(void *adr, int fd);

#endif