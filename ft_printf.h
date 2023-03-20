/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutuil <mboutuil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 00:47:08 by mboutuil          #+#    #+#             */
/*   Updated: 2023/03/19 22:45:41 by mboutuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include<stdarg.h>
# include<unistd.h>
# include<stdio.h>


int	myfprintf(int fd, const char *format, ...);
int	ft_putchar(char c, int fd);
int	ft_putstr(char *s, int fd);
int	ft_strlen(char *s);
int	ft_nbrlen(long long int nb, int base);
int	ft_putnbr_base(unsigned long nb, char format, int fd);
int	ft_putnbr(int nb, int fd);
int	ft_putadd(void *p, int fd);

#endif
