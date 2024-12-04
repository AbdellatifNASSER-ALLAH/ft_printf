/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnasse <abdnasse@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:44:33 by abdnasse          #+#    #+#             */
/*   Updated: 2024/12/04 22:38:13 by abdnasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	va_start(ap, format);
	count = f_putformat(ap, format);
	va_end(ap);
	return (count);
}

int	f_putformat(va_list ap, const char *p)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (p[i])
	{
		if (p[i] == '%')
			f_specifier(ap, p[++i], &count);
		else
			count += ft_putchar(p[i]);
		i++;
	}
	return (count);
}

void	f_specifier(va_list ap, char c, int *count)
{
	if (c == 'c')
		*count += ft_putchar(va_arg(ap, int));
	if (c == 's')
		*count += ft_putstr(va_arg(ap, const char *));
	if (c == 'd' || c == 'i')
		*count += ft_putnbr(va_arg(ap, int));
	if (c == 'u')
		*count += ft_putnbr(va_arg(ap, unsigned int));
	if (c == 'x')
		*count += ft_puthex("0123456789abcdef", va_arg(ap, unsigned int));
	if (c == 'X')
		*count += ft_puthex("0123456789ABCDEF", va_arg(ap, unsigned int));
	if (c == 'p')
		*count += ft_puthex((unsigned long)va_arg(ap, void *));
	if (c == '%')
		*count += ft_putchar('%');
}
