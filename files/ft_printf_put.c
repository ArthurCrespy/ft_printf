/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_put.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:49:07 by acrespy           #+#    #+#             */
/*   Updated: 2022/12/12 17:21:45 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
	ft_count_print(1, 1);
}

void	ft_putstr(char *str)
{
	if (str == NULL)
		ft_putstr("(null)");
	while (str && *str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_putadr(unsigned long nbr)
{
	if (nbr == 0)
		ft_putstr("(nil)");
	else
	{
		ft_putstr("0x");
		ft_putnbr_base(nbr, "0123456789abcdef");
	}
}

void	ft_putnbr(long long n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + 48);
}

void	ft_putnbr_base(unsigned long nbr, char *base)
{
	long	size;

	size = (long)ft_strlen(base);
	if (nbr < 0)
	{
		nbr *= -1;
		ft_putchar('-');
	}
	if (nbr >= size)
		ft_putnbr_base(nbr / size, base);
	ft_putchar(base[nbr % size]);
}
