/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_core_utils2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:38:33 by maghumya          #+#    #+#             */
/*   Updated: 2025/02/24 16:40:53 by maghumya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap(t_list **stack)
{
	int temp;

	if (!*stack || !(*stack)->next)
		return ;
	temp = (*stack)->data;
	(*stack)->data = (*stack)->next->data;
	(*stack)->next->data = temp;
}

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

void rrotate(t_list **stack)
{
	t_list *prelast;
	if (!*stack || !(*stack)->next)
		return ;
	prelast = getprelast(*stack);
	prelast->next->next = (*stack);
	(*stack) = prelast->next;
	prelast->next = NULL;
}
