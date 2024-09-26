/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaracci <acaracci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:56:03 by acaracci          #+#    #+#             */
/*   Updated: 2024/09/06 16:06:49 by acaracci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

// char	*ft_strrchr(const char *s, int c)
// {
// 	size_t			index;
// 	unsigned char	*s_pointer;

// 	index = ft_strlen(s);
// 	s_pointer = (unsigned char *)s;
// 	while (index >= 0)
// 	{
// 		if (s_pointer[index] == (unsigned char)c)
// 			return ((char *)&s_pointer[index]);
// 		index--;
// 	}
// 	if ((unsigned char)c == '\0')
// 		return ((char *)ft_strlen(s));
// 	if (s_pointer[0] != c)
// 		return (0);
// 	return (0);
// }

char	*ft_strrchr(const char *s, int c)
{
	char	*res;

	res = 0;
	while (*s)
	{
		if (*s == (unsigned char)c)
			res = (char *)s;
		s++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s);
	return (res);
}

// char	*ft_strrchr(const char *s, int c)
// {
// 	int	index;
// 	int	i;

// 	index = 0;
// 	i = 0;
// 	while (s[i])
// 	{
// 		if (s[i] == c)
// 			index = i;
// 		i++;
// 	}
// 	if (c == '\0')
// 		return ((char *)&s[i]);
// 	if (index == 0 && s[0] != c)
// 		return (0);
// 	return ((char *)&s[index]);
// }

// int	main(void)
// {
// 	char	c;
// 	char	*s;

// 	c = 'a';
// 	s = "euuuhuuh ?";
// 	printf("strchr returned %s\n", strrchr("teste", 120));
// 	printf("ft_strchr returned %s\n", ft_strrchr("teste", 120));
// 	printf("Théo Babac returned %s\n", s);
// 	return (0);
// }
