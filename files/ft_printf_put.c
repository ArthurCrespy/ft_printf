/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_put.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:49:07 by acrespy           #+#    #+#             */
/*   Updated: 2022/12/10 11:32:03 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
	ft_count_print(1);
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

void	ft_putnbr(long long n, int method)
{
    if (method == 0)
    {
        if (n < 0)
            ft_putnbr(4294967295 - (n * -1) + 1, 1);
        else
            ft_putnbr(n, 1);
    }
    if (method == 1)
    {
        if (n < 0)
        {
            ft_putchar('-');
            n *= -1;
        }
        if (n > 9)
            ft_putnbr(n / 10, method);
        ft_putchar(n % 10 + 48);
    }
}

void    ft_putnbr_base(long long nbr, char *base, int check)
{
    int			b;

	  b = ft_strlen(base);
    if (check == 1)
    {
        if (nbr == 0)
            ft_putstr("(nil)");
        if (nbr == LONG_MIN)
            ft_putstr("8000000000000000");
        if ((unsigned long)nbr == ULONG_MAX)
            ft_putstr("ffffffffffffffff");
    }
    else 
    {
        if (nbr < 0)
        {
            ft_putchar('-');
            nbr *= -1;
            ft_putnbr_base(nbr, base, 0);
        }
        if (nbr < b)
            ft_putchar(base[nbr]);
        else
        {
            ft_putnbr_base(nbr / b, base, 0);
            ft_putnbr_base(nbr % b, base, 0);
        }
    }
}
