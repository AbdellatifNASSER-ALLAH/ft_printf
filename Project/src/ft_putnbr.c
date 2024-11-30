/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnasse <abdnasse@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 14:11:09 by abdnasse          #+#    #+#             */
/*   Updated: 2024/11/30 15:26:09 by abdnasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"

int	ft_putnbr(int nbr)
{
	long	n;
	int	power;
	int	count;
	char	c;
	
	n = nbr;
	count = 0;
	if(n < 0)
	{
		n = -n;
		if (ft_putchar('-') < 0)
			return (-1);
		count++;
	}
	if (n == 0)
	{
		if (ft_putchar('0') < 0)
			return (-1);
		return (1);
	}
	power = ft_ilen(n);
	while (power--)
	{
		c = (n / ft_10power(power)) + 48;
		if (ft_putchar(c) < 0)
			return (-1);
		count++;
		n %= ft_10power(power);
	}
	return (count);
}
