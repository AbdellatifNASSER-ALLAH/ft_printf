/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnasse <abdnasse@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 15:15:13 by abdnasse          #+#    #+#             */
/*   Updated: 2024/11/29 18:23:45 by abdnasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_puthex(char c, unsigned int n)
{
	char	*base;
	int	count;
	unsigned int	hex;
	unsigned int	mask;

	count = 0;
	mask = 0xf0000000; 
	base = "0123456789abcdef";
	if (c == 'X')
		base = "0123456789ABCDEF";
	while(n)
	{
		hex = (n & mask) >> 28;
		if (hex > 0)
		{
			if (ft_putchar(base[hex]) < 0)
				return (-1);
			count++;
		}
		n <<= 4;
	}
	return (count);
}
