/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaracci <acaracci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:19:38 by acaracci          #+#    #+#             */
/*   Updated: 2024/09/20 15:05:05 by acaracci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include "libft/libft.h"

typedef struct s_node
{
	int				value;
	struct s_node	*next;
}t_node;

int	is_number(char *str);
int	plus_min(char *str);
int *parse_arguments(int argc, char **argv);
t_node	*fill_stack(t_node **stack, int *numbers, int count);
void	push_node(t_node **stack, int value);

#endif
