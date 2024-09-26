/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaracci <acaracci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:00:32 by acaracci          #+#    #+#             */
/*   Updated: 2024/09/06 16:02:06 by acaracci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*node;

	if (!lst)
		return (0);
	new = 0;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (node)
		{
			ft_lstadd_back(&new, node);
			lst = lst->next;
		}
		else
		{
			ft_lstclear(&new, del);
			return (0);
		}
	}
	return (new);
}
