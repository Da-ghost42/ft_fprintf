/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutuil <mboutuil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 02:31:59 by mboutuil          #+#    #+#             */
/*   Updated: 2023/03/19 22:23:57 by mboutuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putadd(void *p,int fd)
{
	unsigned long	i;
	int				j;

	j = write(fd, "0x", 2);
	if (p)
	{
		i = (unsigned long)p;
		j += ft_putnbr_base((unsigned long)p, 'x',fd);
		return (j);
	}
	else
		j += write(fd, "0", 1);
	return (j);
}
