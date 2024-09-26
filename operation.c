/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaracci <acaracci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 20:03:04 by acaracci          #+#    #+#             */
/*   Updated: 2024/09/20 15:03:50 by acaracci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_node(t_node **stack, int value)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (!new_node)
		return ;
	new_node->value = value;
	new_node->next = *stack;
	*stack = new_node;
}
t_node	*fill_stack(t_node **stack, int *numbers, int count)
{
	int		i;
	t_node	*stack_a;
	numbers = parse_arguments(argc, argv);
	
	i = 0;
	stack_a = NULL;
	while (i < argc - 1)
	{
		i++;
		push_node(&stack_a, numbers[i]);
	}
	free(numbers);
	return (stack_a);
}