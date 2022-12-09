/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:49:07 by acrespy           #+#    #+#             */
/*   Updated: 2022/11/28 13:37:04 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str)
{
	while (str && *str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(long long n, int method)
{
	long long	nb;

	nb = n;
	if (method == 1)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
	}
	if (method == 0)
	{
		if (nb < 0)
			nb *= -1;
	}
	if (nb > 9)
		ft_putnbr(nb / 10, method);
	ft_putchar(nb % 10 + 48);
}

void	ft_putnbr_base(long nbr, char *base)
{
	long	b;

	if (!check_base(base))
		return ;
	b = ft_strlen(base);
	if (nbr <= -2147483648)
	{
		write(1, "-", 1);
		ft_putnbr_base((-(long int)nbr) / b, base);
		ft_putnbr_base((-(long int)nbr) % b, base);
	}
	else if (nbr < 0)
	{
		write(1, "-", 1);
		ft_putnbr_base(-nbr, base);
	}
	else if (nbr < b)
	{
		write(1, &base[nbr], 1);
	}
	else
	{
		ft_putnbr_base(nbr / b, base);
		ft_putnbr_base(nbr % b, base);
	}
}
