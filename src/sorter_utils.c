/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 16:45:45 by maghumya          #+#    #+#             */
/*   Updated: 2025/03/11 23:48:49 by maghumya         ###   ########.fr       */
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
	size_t	max;
	size_t	i;

	i = 0;
	max = get_stack_size(stack) - 1;
	while (stack)
	{
		if (stack->index == max)
			return (i);
		i++;
		stack = stack->next;
	}
	return (0);
}
