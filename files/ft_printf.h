/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:17:42 by acrespy           #+#    #+#             */
/*   Updated: 2022/12/09 17:35:36 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <limits.h>

int		ft_printf(const char *str, ...);
void	ft_print(const char *str, va_list args);
void	ft_putstr(char *str);
void	ft_putchar(char c);
void    ft_putadr(long long nbr);
void	ft_putnbr(long long n, int method);
int		ft_strlen(char *str);
int		ft_count_print(int count);
void    ft_putnbr_base(long long nbr, char *base);
#endif
