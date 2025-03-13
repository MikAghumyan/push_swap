/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_ops.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 18:52:22 by maghumya          #+#    #+#             */
/*   Updated: 2025/03/12 22:50:20 by maghumya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	pa(t_stack **a, t_stack **b, bool print)
{
	if (!(is_empty(*b)))
	{
		push(a, (*b)->data, (*b)->index);
		pop(b);
		if (print)
			ft_printf("pa\n");
	}
}

void	pb(t_stack **b, t_stack **a, bool print)
{
	if (!(is_empty(*a)))
	{
		push(b, (*a)->data, (*a)->index);
		pop(a);
		if (print)
			ft_printf("pb\n");
	}
}
