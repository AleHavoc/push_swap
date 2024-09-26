/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaracci <acaracci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 12:16:32 by acaracci          #+#    #+#             */
/*   Updated: 2024/09/06 16:06:10 by acaracci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	dest_size;
	size_t	src_size;
	size_t	total_size;

	dest_size = 0;
	src_size = 0;
	while (dest[dest_size])
		dest_size++;
	while (src[src_size])
		src_size++;
	if (size == 0)
		return (src_size);
	if (size <= dest_size)
		return (src_size + size);
	total_size = src_size + dest_size;
	i = 0;
	while (src[i] && dest_size < size - 1)
	{
		dest[dest_size] = src[i];
		dest_size++;
		i++;
	}
	dest[dest_size] = '\0';
	return (total_size);
}
