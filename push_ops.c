/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_ops.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 18:52:22 by maghumya          #+#    #+#             */
/*   Updated: 2025/02/25 18:52:38 by maghumya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void pa(t_list **a, t_list **b)
{
	if (!(isEmpty(*b)))
	{
		push(a, (*b)->data);
		pop(b);
		ft_printf("pa\n");
	}
}

void pb(t_list **b, t_list **a)
{
	if (!(isEmpty(*a)))
	{
		push(b, (*a)->data);
		pop(a);
		ft_printf("pb\n");
	}
}
