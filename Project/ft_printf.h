/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnasse <abdnasse@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:44:42 by abdnasse          #+#    #+#             */
/*   Updated: 2024/12/04 22:39:12 by abdnasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		f_putformat(va_list ap, const char *p);
void	f_specifier(va_list ap, char c, int *count);
int		ft_putchar(char c);
int		ft_puthex(char *base, unsigned int n);
int		ft_putptr(unsigned long ptr);
int		ft_putnbr(long n);
int		ft_putstr(const char *str);
int		ft_ilen(unsigned int n);
int		ft_10power(int power);

#endif
