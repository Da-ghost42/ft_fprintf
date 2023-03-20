/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutuil <mboutuil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 14:05:46 by mboutuil          #+#    #+#             */
/*   Updated: 2023/03/19 22:26:16 by mboutuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_putnbr(int nb, int fd)
{
	long int	nbr;

	nbr = nb;
	if (nb < 0)
	{
		ft_putchar('-',fd);
		nbr *= -1;
	}
	if (nbr >= 0 && nbr <= 9)
		ft_putchar((nbr + 48),fd);
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10,fd);
		ft_putchar(((nbr % 10) + 48),fd);
	}
	nbr = nb;
	return (ft_nbrlen(nbr, 10));
}
