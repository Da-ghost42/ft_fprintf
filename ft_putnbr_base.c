/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutuil <mboutuil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 00:17:31 by mboutuil          #+#    #+#             */
/*   Updated: 2023/03/19 22:25:41 by mboutuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned long nb, char format, int fd)
{
	char	*base;

	if (format == 'X')
		base = "0123456789ABCDEF";
	if (format == 'x')
		base = "0123456789abcdef";
	if (format == 'u')
		base = "0123456789";
	if (nb < (unsigned long)ft_strlen(base))
		ft_putchar(base[nb],fd);
	else
	{
		ft_putnbr_base(nb / ((unsigned long)ft_strlen(base)), format,fd);
		ft_putnbr_base(nb % ((unsigned long)ft_strlen(base)), format,fd);
	}
	return (ft_nbrlen(nb, ft_strlen(base)));
}
