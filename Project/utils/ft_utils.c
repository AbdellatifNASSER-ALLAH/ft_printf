/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnasse <abdnasse@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 14:44:44 by abdnasse          #+#    #+#             */
/*   Updated: 2024/11/30 15:33:38 by abdnasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_utils.h"

int	ft_ilen(int n)
{
	int	i;

	i = 0;
	if n == 0)
		return (1);
	if (n < 0)
		n = -n;
	while (n)
	{
		i++;
		n /= 10;
	}
	return (i);
}

int	ft_10power(int	power)
{
	int	res;

	res = 1;
	while (power--)
		res *= 10;
	return (res);
}
