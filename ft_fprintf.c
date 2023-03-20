/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myfprintf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutuil <mboutuil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 23:37:21 by mboutuil          #+#    #+#             */
/*   Updated: 2023/03/19 22:45:30 by mboutuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	spec_treater(va_list arg, char format,int fd)
{
	int	len;

	len = 0;
	if (format == 'c')
		len = ft_putchar(va_arg(arg, int), fd);
	else if (format == 's')
		len += ft_putstr(va_arg(arg, char *), fd);
	else if (format == 'd' || format == 'i')
		len = ft_putnbr(va_arg(arg, int),fd);
	else if (format == 'u' || format == 'X' || format == 'x')
		len = ft_putnbr_base(va_arg(arg, unsigned int), format, fd);
	else if (format == 'p')
		len = ft_putadd(va_arg(arg, void *), fd);
	else
		len = ft_putchar(format, fd);
	return (len);
}

int	ft_fprintf(int fd, const char *format, ...)
{
	unsigned int	i;
	va_list			arg;
	int				j;

	i = 0;
	j = 0;
	va_start(arg, format);
	while (format[j] && j < ft_strlen((char *)format))
	{
		while (format[j] != '%' && j < ft_strlen((char *)format))
		{
			i += ft_putchar(format[j], fd);
			j++;
		}
		if (format[j] && format[j] == '%' && j < ft_strlen((char *)format))
		{
			i += spec_treater(arg, format [j + 1], fd);
			j++;
		}
		j++;
	}
	va_end(arg);
	return (i);
}

