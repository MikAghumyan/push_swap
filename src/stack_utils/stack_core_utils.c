/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_core_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 14:20:59 by maghumya          #+#    #+#             */
/*   Updated: 2025/02/24 16:42:47 by maghumya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../includes/push_swap.h"

int isEmpty(t_stack *stack)
{
	return (stack == NULL);
}

void pop(t_stack **stack)
{
	t_stack *temp;

	if (!(*stack))
		return ;
	temp = (*stack)->next;
	free(*stack);
	*stack = temp;
}

void push(t_stack **stack, int num)
{
	t_stack *new_node;

	new_node = malloc(sizeof(t_stack));
	if (!new_node)
		return ;
	new_node->data = num;
	new_node->next = *stack;
	*stack = new_node;
}

void free_stack(t_stack **stack)
{
	while (*stack)
		pop(stack);
}

//
// t_stack *getlast(t_stack *stack)
// {
// 	t_stack *tmp;
//
// 	if(!stack)
// 		return (NULL);
// 	tmp = stack;
// 	while(tmp->next)
// 		tmp = tmp->next;
// 	return (tmp);
// }

t_stack *getprelast(t_stack *stack)
{
	t_stack *tmp;

	if(!stack)
		return (NULL);
	tmp = stack;
	while(tmp->next->next)
		tmp = tmp->next;
	return (tmp);
}
