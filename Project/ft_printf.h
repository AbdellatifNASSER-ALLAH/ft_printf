/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnasse <abdnasse@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:44:42 by abdnasse          #+#    #+#             */
/*   Updated: 2024/12/02 17:41:52 by abdnasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "src/ft_src.h"
# include "utils/ft_utils.h"
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		f_putformat(va_list ap, const char *p);
void	f_specifier(va_list ap, char c, int *count);

#endif
