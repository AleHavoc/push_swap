/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaracci <acaracci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 16:12:22 by acaracci          #+#    #+#             */
/*   Updated: 2024/09/06 16:05:47 by acaracci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		length;
	char	*copy;

	length = 0;
	while (src[length])
		length++;
	copy = malloc(sizeof(char) * length + 1);
	if (!copy)
		return (0);
	length = 0;
	while (src[length])
	{
		copy[length] = src[length];
		length++;
	}
	copy[length] = '\0';
	return (copy);
}
