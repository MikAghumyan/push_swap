/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 15:09:13 by maghumya          #+#    #+#             */
/*   Updated: 2025/03/11 23:29:35 by maghumya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	make_butterfly(t_stack **a, t_stack **b)
{
	size_t	pivot;
	size_t	offset;

	pivot = 0;
	offset = 1;
	while (*a)
	{
		if ((*a)->index <= pivot)
		{
			pb(b, a);
			rb(b);
			pivot++;
		}
		else if ((*a)->index <= pivot + offset)
		{
			pb(b, a);
			offset++;
		}
		else
			ra(a);
		ft_printf("a: \n");
		print_stack(*a);
		ft_printf("b: \n");
		print_stack(*b);
	}
}

void	push_back(t_stack **a, t_stack **b)
{
	size_t	max_position;

	while (*b)
	{
		max_position = get_max_position(*b);
		ft_printf("max_position: %ld\n", max_position);
		print_stack(*b);
		if (max_position < get_stack_size(*b) / 2)
			while (max_position--)
				rb(b);
		else
			while (max_position++ < get_stack_size(*b))
				rrb(b);
		pa(a, b);
	}
}

void	sort_stack(t_stack **a, t_stack **b)
{
	make_butterfly(a, b);
	push_back(a, b);
}
