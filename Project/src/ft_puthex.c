/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnasse <abdnasse@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 15:15:13 by abdnasse          #+#    #+#             */
/*   Updated: 2024/11/30 11:44:51 by abdnasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"

int	ft_puthex(char c, unsigned int n)
{
	char			*base;
	int				count;
	unsigned int	hex;
	unsigned int	mask;
	unsigned int	shift;

	mask = 0xf0000000;
	base = "0123456789abcdef";
	if (c == 'X')
		base = "0123456789ABCDEF";
	if (n == 0)
		return (ft_putchar(base[0]));
	count = 0;
	shift = 28;
	while (mask)
	{
		hex = (n & mask) >> shift;
		if (hex > 0 || count > 0)
		{
			if (ft_putchar(base[hex]) < 0)
				return (-1);
			count++;
		}
		shift -= 4;
		mask >>= 4;
	}
	return (count);
}
