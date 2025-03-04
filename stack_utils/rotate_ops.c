/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_ops.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:45:06 by maghumya          #+#    #+#             */
/*   Updated: 2025/02/26 17:51:21 by maghumya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void rotate(t_list **stack)
{
	t_list  *temp;
	t_list	*last;

	if (!*stack || !(*stack)->next)
		return ;
	temp = (*stack)->next;
	last = getprelast(*stack)->next;
	last->next = (*stack);
	(*stack)->next = NULL;
	*stack = temp;
}

void ra(t_list **a)
{
	rotate(a);
	ft_printf("ra\n");
}

void rb(t_list **b)
{
	rotate(b);
	ft_printf("rb\n");
}

void rr(t_list **a, t_list **b)
{
	rotate(a);
	rotate(b);
	ft_printf("rr\n");
}
