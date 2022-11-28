/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:17:24 by acrespy           #+#    #+#             */
/*   Updated: 2022/11/28 12:49:18 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_printf(const char *str, ...)
{
	int i;
	char *s;
	va_list args;

	i = 0;
	s = (char *) str;
	va_start(args, str);

	while (str && *str != '\0')
	{
		if (*str == '%')
		{
			str++;
			if (*str == '%')
				ft_putchar(*str);
			if (*str == 'c')
				ft_putchar(va_arg(args, int));
		}
		else
			ft_putchar(*str);
		str++;
	}
	return (0);
}