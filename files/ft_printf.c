/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:17:24 by acrespy           #+#    #+#             */
/*   Updated: 2022/11/28 13:08:25 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf(const char *str, ...)
{
	va_list	args;

	va_start(args, str);
	while (str && *str != '\0')
	{
		if (*str == '%')
		{
			str++;
			ft_print(str, args);
		}
		else
			ft_putchar(*str);
		str++;
	}
	va_end(args);
}

void     ft_print(const char *str, va_list args)
{
		if (*str == '%')
			ft_putchar(*str);
		if (*str == 'c')
			ft_putchar(va_arg(args, int));
		if (*str == 's')
			ft_putstr(va_arg(args, char *));
		if (*str == 'p')
		{
			ft_putstr(va_arg(args, void *));
		}
		if (*str == 'd')
			ft_putnbr(va_arg(args, double));
		if (*str == 'i')
			ft_putnbr(va_arg(args, int));
		if (*str == 'u')
			ft_putnbr(va_arg(args, int));
		if (*str == 'x')
			ft_putnbr(va_arg(args, int));
		str++;
}