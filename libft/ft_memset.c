/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaracci <acaracci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 18:36:06 by acaracci          #+#    #+#             */
/*   Updated: 2024/09/06 16:03:16 by acaracci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			count;
	unsigned char	*pointer_copy;

	count = 0;
	pointer_copy = (unsigned char *)s;
	while (count < n)
	{
		pointer_copy[count++] = (unsigned char)c;
	}
	return (pointer_copy);
}
