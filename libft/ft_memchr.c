/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaracci <acaracci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:56:03 by acaracci          #+#    #+#             */
/*   Updated: 2024/09/06 16:02:41 by acaracci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			index;
	unsigned char	*s_pointer;

	index = 0;
	s_pointer = (unsigned char *)s;
	while (index < n)
	{
		if (s_pointer[index] == (unsigned char)c)
			return (&s_pointer[index]);
		index++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	c;
// 	char	*s;

// 	c = 'u';
// 	s = "e\0uuuh ?";
// 	printf("strchr returned %p\n", memchr(s, c, 10));
// 	printf("ft_strchr returned %p\n", ft_memchr(s, c, 10));
// 	printf("Théo Babac returned %s\n", s);
// 	return (0);
// }
