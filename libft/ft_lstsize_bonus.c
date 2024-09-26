/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaracci <acaracci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 13:18:39 by acaracci          #+#    #+#             */
/*   Updated: 2024/09/06 16:02:31 by acaracci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*current;

	if (!lst)
		return (0);
	count = 1;
	current = lst;
	while (current->next)
	{
		count++;
		current = current->next;
	}
	return (count);
}
