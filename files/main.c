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
	char	c = 'a';
	char	*s = NULL;
	char	*o = "Ouistiti";
	void	*p = &o;
	int		nb = 5165165;
	long	nb1 = 2147483647;
	int		nb2 = 654653165;

	printf("\n---- OFFICIAL FUNCTION ----");
	off_count_char = printf("\n> %% -> %% | char -> %c | str -> %s | address : %p | nb -> %d | nb -> %li | unb -> %ld | hexa -> %x | HEXA -> %X\n", c, s, p, nb, nb1, nb1, nb2, nb2);
	printf("\n> nb of characters printed -> %d\n\n", off_count_char);

	printf("\n---- ACRESPY's FUNCTION ----");
	//ft_printf("\n> %% -> %% | char -> %c | str -> %s | address : %p | nb -> %d | nb -> %i | unb -> %u | hexa -> %x | HEXA -> %X\n", c, s, p, nb, nb1, nb1, nb2, nb2);
	count_char = ft_printf("\n> %% -> %% | char -> %c | str -> %s | address : %p | nb -> %d | nb -> %i | unb -> %u | hexa -> %x | HEXA -> %X\n", c, s, p, nb, nb1, nb1, nb2, nb2);
	printf("\n> nb of characters printed -> %d\n\n", count_char);

	off_count_char = printf("%d bleble%", 10);
	printf("\n> nb of characters printed -> %d\n\n", off_count_char);
	count_char = ft_printf("%d bleble%", 10);
	printf("\n> nb of characters printed -> %d\n\n", count_char);

	return (0);
}

/*
int	main(void)
{
	int		original;
	int		mine;
	char	*str;

	str = "Just some text..";

	printf("\n\n--- ALL ---\n");
	original = printf("-> %c | %s | %p | %d | %i | %u | %x | %X | %% |", str[0], str, str, 42, 42, 42, 42, 42);
	printf("\n");
	mine = ft_printf("-> %c | %s | %p | %d | %i | %u | %x | %X | %% |", str[0], str, str, 42, 42, 42, 42, 42);
	printf("\n");
	printf("%d : %d\n", original, mine);

	printf("\n\n--- SAME WITH %%%%%% AT THE END ---\n");
	original = printf("-> %c | %s | %p | %d | %i | %u | %x | %X | %% |%%%", str[0], str, str, 42, 42, 42, 42, 42);
	printf("\n");
	mine = ft_printf("-> %c | %s | %p | %d | %i | %u | %x | %X | %% |%%%", str[0], str, str, 42, 42, 42, 42, 42);
	printf("\n");
	printf("%d : %d\n", original, mine);

	printf("\n\n--- SAME WITH %%%%%% AT THE END AND SOME TEXT ---\n");
	original = printf("-> %c | %s | %p | %d | %i | %u | %x | %X | %% |%%%%| texte", str[0], str, str, 42, 42, 42, 42, 42);
	printf("\n");
	mine = ft_printf("-> %c | %s | %p | %d | %i | %u | %x | %X | %% |%%%%| texte", str[0], str, str, 42, 42, 42, 42, 42);
	printf("\n");
	printf("%d : %d\n", original, mine);

	printf("\n\n--- EMPTY STRING ---\n");
	original = printf("");
	mine = ft_printf("");
	printf("%d : %d\n", original, mine);

	printf("\n\n--- WITH ft_printf(0) ---\n");
	original = printf(0);
	mine = ft_printf(0);
	printf("%d : %d\n", original, mine);

	printf("\n\n--- WITH STR AS ONLY ARGUMENT ---\n");
	original = printf(str);
	printf("\n");
	mine = ft_printf(str);
	printf("\n");
	printf("%d : %d\n", original, mine);

	printf("\n\n--- WITH NULL AS STRING AND ADRESS ---\n");
	original = printf("-> %s | %p", NULL, NULL);
	printf("\n");
	mine = ft_printf("-> %s | %p", NULL, NULL);
	printf("\n");
	printf("%d : %d\n", original, mine);

	printf("\n\n--- WITH TAB AND ANTICIPATED END OF STRING ---\n");
	original = printf("-> \t|\0\0gloubiboulgah");
	printf("\n");
	mine = ft_printf("-> \t|\0\0gloubiboulgah");
	printf("\n");
	printf("%d : %d\n", original, mine);

	printf("\n\n--- WITH NEGATIVE VALUES ---\n");
	original = printf("%u | %x | %X | %d | %i | %c | %p", -42, -42, -42, -42, -42, -42, (void *) -42);
	printf("\n");
	mine = ft_printf("%u | %x | %X | %d | %i | %c | %p", -42, -42, -42, -42, -42, -42, (void *) -42);
	printf("\n");
	printf("%d : %d\n", original, mine);

	printf("\n\n--- PRINT ADRESS WITH %%x and %%X ---\n");
	original = printf("%x | %X | %x | %X", NULL, NULL, &str, &str);
	printf("\n");
	mine = ft_printf("%x | %X | %x | %X", NULL, NULL, &str, &str);
	printf("\n");
	printf("%d : %d\n", original, mine);
}*/
