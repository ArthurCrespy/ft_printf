/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:49:07 by acrespy           #+#    #+#             */
/*   Updated: 2022/11/28 12:49:09 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by acrespy on 11/28/22.
//

#include "ft_printf.h"

void ft_putstr(char *str)
{
	while (str && *str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}