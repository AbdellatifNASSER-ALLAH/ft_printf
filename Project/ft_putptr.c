/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnasse <abdnasse@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 22:13:34 by abdnasse          #+#    #+#             */
/*   Updated: 2024/12/04 22:45:09 by abdnasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putptr(unsigned long ptr)
{
	int	count;
	int	check;

	if ((void *)ptr == NULL)
		return (ft_putstr("(nil)");
	count = ft_putstr("0x");
	if (count < 0)
		return (-1);
}
