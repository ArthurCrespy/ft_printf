#include "ft_printf.h"

int	main(void)
{
	char	c = 'a';
	char	*s = "Bienvenue a 42";
	char    *o = "Ouistiti";
	void    *p = &o;
	double  nb = 24.5;
	int     nb1 = -9221;
	int     nb2 = 654653165;

	printf("\n> off funct -> %p\n", p);
	ft_printf("\n> %% -> %% | char -> %c | str - > %s | address : %p | nb -> %d | nb -> %i | unb -> %u | hexa -> %x | HEXA -> %X\n\n", c, s, p, nb, nb1, nb1, nb2, nb2);
	return (0);
}