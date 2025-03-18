/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 16:45:45 by maghumya          #+#    #+#             */
/*   Updated: 2025/03/18 18:13:48 by maghumya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

size_t	get_stack_size(t_stack *stack)
{
	size_t	size;

	size = 0;
	while (stack)
	{
		size++;
		stack = stack->next;
	}
	return (size);
}

size_t	get_max_position(t_stack *stack)
{
	int		max;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	max = stack->data;
	while (stack)
	{
		if (stack->data > max)
		{
			max = stack->data;
			i = j;
		}
		j++;
		stack = stack->next;
	}
	return (i);
}

size_t	get_min_position(t_stack *stack)
{
	int		min;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	min = stack->data;
	while (stack)
	{
		if (stack->data < min)
		{
			i = j;
			min = stack->data;
		}
		j++;
		stack = stack->next;
	}
	return (i);
}
