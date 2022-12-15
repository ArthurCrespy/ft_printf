/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:17:24 by acrespy           #+#    #+#             */
/*   Updated: 2022/12/09 17:35:09 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;

	va_start(args, str);
	ft_count_print(0, 0);
	if (!str)
		return (-1);
	while (str && *str != '\0')
	{
		if (*str == '%')
		{
			str++;
			if (*str == '\0')
				return (-1);
			ft_print(str, args);
		}
		else
			ft_putchar(*str);
		str++;
	}
	va_end(args);
	return (ft_count_print(0, 1));
}

void	ft_print(const char *str, va_list args)
{
	if (*str == 'c')
		ft_putchar(va_arg(args, int));
	else if (*str == 's')
		ft_putstr(va_arg(args, char *));
	else if (*str == 'p')
		ft_putadr(va_arg(args, unsigned long));
	else if (*str == 'd')
		ft_putnbr(va_arg(args, int));
	else if (*str == 'i')
		ft_putnbr(va_arg(args, int));
	else if (*str == 'u')
		ft_putnbr(va_arg(args, unsigned int));
	else if (*str == 'x')
		ft_putnbr_base(va_arg(args, unsigned int), "0123456789abcdef");
	else if (*str == 'X')
		ft_putnbr_base(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (*str == '%')
		ft_putchar(*str);
	else
	{
		ft_putchar('%');
		ft_putchar(*str);
	}
	str++;
}

int	ft_count_print(int count, int reset)
{
	static int	i;

	if (reset == 0)
		i = 0;
	i += count;
	return (i);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
