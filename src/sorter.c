/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 15:09:13 by maghumya          #+#    #+#             */
/*   Updated: 2025/03/12 22:52:25 by maghumya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	make_butterfly(t_stack **a, t_stack **b)
{
	size_t	pivot;
	size_t	offset;

	pivot = 0;
	offset = get_sqrt(get_stack_size(*a));
	while (*a)
	{
		if ((*a)->index <= pivot)
		{
			pb(b, a, true);
			rb(b, true);
			pivot++;
		}
		else if ((*a)->index <= pivot + offset)
		{
			pb(b, a, true);
			pivot++;
		}
		else
			ra(a, true);
	}
}

void	push_back(t_stack **a, t_stack **b)
{
	size_t	max_position;

	while (*b)
	{
		max_position = get_max_position(*b);
		if (max_position <= get_stack_size(*b) / 2)
			while (max_position--)
				rb(b, true);
		else
			while (max_position++ < get_stack_size(*b))
				rrb(b, true);
		pa(a, b, true);
	}
}

void	sort_stack(t_stack **a, t_stack **b)
{
	make_butterfly(a, b);
	push_back(a, b);
}

int	is_sorted(t_stack *stack)
{
	while (stack->next)
	{
		if (stack->data > stack->next->data)
			return (0);
		stack = stack->next;
	}
	return (1);
}
