/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaracci <acaracci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:22:10 by acaracci          #+#    #+#             */
/*   Updated: 2024/09/20 21:17:39 by acaracci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_number(char *str)
{
	int i;
	
	i = -1;
	while(str[++i])
	{
		if(str[i] < '0' || str[i] > '9' )
		{
			ft_print_string("Error unvalid char\n");
			return(1);
		}
	}
	return(0);
}

int	plus_min(char *str)
{
	int	i;
	
	i = -1;
	while(str[++i])
	{
		while(str[i] == ' ')
			i++;
		if(is_number(str) != 0)
			return(1);
		if(str[i] == '+' || str[i] == '-' || str[i] == ' ')
		{
			i++;
			if(is_number(str) != 0)
			return(1);
		}
	}
	return(0);
}
int check_duplicates(int *numbers, int size)
{
	int i;
	int j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (numbers[i] == numbers[j])
			{
				write(2,"Double numbers\n",14); //devono stampare su fd 2 = stderr
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}
int *parse_arguments(int argc, char **argv)
{
	int *numbers;
	int i;

	numbers = (int *)malloc((argc - 1) * sizeof(int));
	if (!numbers)
		return (0);
	i = 1;
	while (i < argc)
	{
		if (plus_min(argv[i]) == 1)
		{
			free(numbers);
			return (0);
		}
		numbers[i - 1] = ft_atoi(argv[i]);
		i++;
	}
	if (check_duplicates(numbers, argc - 1))
	{
		free(numbers);
		return (0);
	}
	return (numbers);
}
int	check_input(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc < 2)
	{
		ft_print_string("Error: No arguments provided.\n");
		return (1);
	}
	while (i < argc)
	{
		if (plus_min(argv[i]) == 1)
		{
			ft_print_string("Error: Invalid argument.\n");
			return (1);
		}
		i++;
	}
	return (0);
}
