/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_width.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaracci <acaracci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 13:15:18 by acaracci          #+#    #+#             */
/*   Updated: 2024/09/06 16:03:24 by acaracci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_parse_width(const char *format, int *i, t_flags *flags, va_list *args)
{
	int	count;

	count = 0;
	if (format[*i] == '*')
	{
		flags->width = va_arg(*args, int);
		if (flags->width < 0)
		{
			flags->minus = 1;
			flags->width = -flags->width;
		}
	}
	else if (ft_isdigit(format[*i]))
	{
		flags->width = ft_atoi(&format[*i]);
		*i += ft_intlen(flags->width) - 1;
	}
	count += ft_intlen(flags->width);
	return (count);
}
