/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_ops.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 18:52:22 by maghumya          #+#    #+#             */
/*   Updated: 2025/03/11 18:57:57 by maghumya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	pa(t_stack **a, t_stack **b)
{
	if (!(isEmpty(*b)))
	{
		push(a, (*b)->data, (*b)->index);
		pop(b);
		ft_printf("pa\n");
	}
}

void	pb(t_stack **b, t_stack **a)
{
	if (!(isEmpty(*a)))
	{
		push(b, (*a)->data, (*a)->index);
		pop(a);
		ft_printf("pb\n");
	}
}
