/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate_ops.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:45:06 by maghumya          #+#    #+#             */
/*   Updated: 2025/02/26 17:53:03 by maghumya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void rrotate(t_stack **stack)
{
	t_stack *prelast;
	if (!*stack || !(*stack)->next)
		return ;
	prelast = getprelast(*stack);
	prelast->next->next = (*stack);
	(*stack) = prelast->next;
	prelast->next = NULL;
}

void	rra(t_stack **a)
{
	rrotate(a);
	ft_printf("rra\n");
}

void	rrb(t_stack **b)
{
	rrotate(b);
	ft_printf("rrb\n");
}

void	rrr(t_stack **a, t_stack **b)
{
	rrotate(a);
	rrotate(b);
	ft_printf("rrr\n");
}
