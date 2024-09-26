/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_padding.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaracci <acaracci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 13:14:42 by acaracci          #+#    #+#             */
/*   Updated: 2024/09/06 16:03:59 by acaracci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_padding(int width, int len, char c)
{
	int	count;

	count = 0;
	while (width - len > 0)
	{
		ft_putchar_fd(c, 1);
		count++;
		width--;
	}
	return (count);
}
