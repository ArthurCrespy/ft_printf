/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:17:42 by acrespy           #+#    #+#             */
/*   Updated: 2022/11/28 13:37:17 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <malloc.h>

void	ft_printf(const char *str, ...);
void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_putadr(char *adr);
void	ft_putnbr(long long n);
char	*ft_itoa(int n);
void     ft_print(const char *str, va_list args);
#endif
