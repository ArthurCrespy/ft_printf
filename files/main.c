/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:54:34 by acrespy           #+#    #+#             */
/*   Updated: 2022/12/09 17:37:32 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int		count_char = 0;
	int		off_count_char = 0;
/*	char	c = 'a';
	char	*s = NULL;
	char	*o = "Ouistiti";
	void	*p = &o;
	int		nb = 5165165;
	long		nb1 = 2147483647;
	int		nb2 = 654653165;
	long    *l = 2147483647;
	long    *ll = &l;*/
    long     d = 0;

	/*printf("\n---- OFFICIAL FUNCTION ----");
	off_count_char = printf("\n> %% -> %% | char -> %c | str - > %s | address : %p | nb -> %d | nb -> %i | unb -> %u | hexa -> %x | HEXA -> %X\n", c, s, p, nb, nb1, nb1, nb2, nb2);
	printf("\n> nb of characters printed -> %d\n\n", off_count_char);

	ft_printf("\n---- ACRESPY's FUNCTION ----");
	count_char = ft_printf("\n> %% -> %% | char -> %c | str - > %s | address : %p | nb -> %d | nb -> %i | unb -> %u | hexa -> %x | HEXA -> %X\n", c, s, p, nb, nb1, nb1, nb2, nb2);
	ft_printf("\n> nb of characters printed -> %d\n\n", count_char);

	ft_printf("\n----%%P TEST----");*/

	printf("\n---- OFFICIAL FUNCTION ----\n> ");
	off_count_char = printf("%p", d);
	printf("\n> nb of characters printed -> %d\n\n", off_count_char);

	printf("\n---- ACRESPY's FUNCTION ----\n >");
	count_char = ft_printf("%p", d);
	printf("\n> nb of characters printed -> %d\n\n", count_char);
	return (0);
}
