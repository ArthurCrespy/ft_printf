//
// Created by acrespy on 12/9/22.
//

#include "ft_printf.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(str) <= 1)
		return (0);
	while (str[i] != 0x00)
	{
		if (!(str[i] >= 65 && str[i] <= 90)
		    && !(str[i] >= 97 && str[i] <= 122)
		    && !(str[i] >= 48 && str[i] <= 57))
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[j] == str[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}