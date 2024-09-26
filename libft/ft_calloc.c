/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaracci <acaracci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 16:47:02 by acaracci          #+#    #+#             */
/*   Updated: 2024/09/06 15:49:37 by acaracci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t nelem, size_t elsize)
{
	size_t			i;
	unsigned char	*pointer;

	pointer = malloc(nelem * elsize);
	if (!pointer)
		return (0);
	i = 0;
	while (i < (nelem * elsize))
	{
		pointer[i] = 0;
		i++;
	}
	return (pointer);
}
