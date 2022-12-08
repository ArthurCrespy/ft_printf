#include "ft_printf.h"

int	main(void)
{
	char	c = 'a';
	char	*s = "Bienvenue a 42";
	void    *p = "Ouistiti";
	float nb = 24.5;
	int     nb1 = -9221;

	printf("\n> off funct -> %f\n", nb);
	ft_printf("\n> %% -> %% | char -> %c | str - > %s | address : %p | nb -> %d | unb -> %i\n\n", c, s, p, nb, nb1);
	return (0);
}
