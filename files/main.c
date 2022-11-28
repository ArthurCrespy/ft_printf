//
// Created by acrespy on 11/28/22.
//

#include "ft_printf.h"

int     main(void)
{
	char c = 'a';
	char c1 = 92;
	char *s = "Bienvenue a 42";

	ft_printf("%% -> %% | char -> %c%c", c, c1);
	return (0);
}