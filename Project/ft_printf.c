/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnasse <abdnasse@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:44:33 by abdnasse          #+#    #+#             */
/*   Updated: 2024/12/02 17:37:18 by abdnasse         ###   ########.fr       */
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
		if (p[i] == '%' && i++)
			f_specifier(ap, p[i], &count);
		else
			count++;
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
		*count += ft_putunbr(va_arg(ap, unsigned int));
	if (c == 'x' || c == 'X' || c == 'p')
		*count += ft_puthex(c, va_arg(ap, unsigned int));
	if (c == '%')
		*count += ft_putchar('%');
}
