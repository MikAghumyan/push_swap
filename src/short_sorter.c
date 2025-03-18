/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_sorter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 20:47:48 by maghumya          #+#    #+#             */
/*   Updated: 2025/03/18 18:19:01 by maghumya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_two(t_stack **a)
{
	if ((*a)->index > (*a)->next->index)
		sa(a, true);
}

void	sort_three(t_stack **a)
{
	size_t	min;
	size_t	max;

	min = get_min_position(*a);
	max = get_max_position(*a);
	if (min == 0 && max == 1)
	{
		sa(a, true);
		ra(a, true);
	}
	else if (min == 1 && max == 0)
		ra(a, true);
	else if (min == 1 && max == 2)
		sa(a, true);
	else if (min == 2 && max == 0)
	{
		sa(a, true);
		rra(a, true);
	}
	else if (min == 2 && max == 1)
		rra(a, true);
}

void	sort_four(t_stack **a, t_stack **b)
{
	size_t	min;

	min = get_min_position(*a);
	while (get_stack_size(*a) > 3)
	{
		if (min == 0)
			pb(b, a, true);
		else
			ra(a, true);
		min = get_min_position(*a);
	}
	sort_three(a);
	pa(a, b, true);
}

void	sort_five(t_stack **a, t_stack **b)
{
	size_t	min;
	size_t	max;

	min = get_min_position(*a);
	max = get_max_position(*a);
	while (get_stack_size(*a) > 3)
	{
		if (min == 0 || max == 0)
			pb(b, a, true);
		else
			ra(a, true);
		min = get_min_position(*a);
		max = get_max_position(*a);
	}
	sort_three(a);
	sort_two(b);
	pa(a, b, true);
	pa(a, b, true);
	ra(a, true);
}
