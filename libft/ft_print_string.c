/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaracci <acaracci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 12:53:43 by acaracci          #+#    #+#             */
/*   Updated: 2024/09/06 16:04:24 by acaracci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_string(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (ft_print_string("(null)"));
	while (str[i])
	{
		ft_putchar_fd(str[i], 1);
		i++;
	}
	return (i);
}
