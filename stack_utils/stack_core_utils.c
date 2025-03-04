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
#include "../includes/push_swap.h"

int isEmpty(t_list *stack)
{
	return (stack == NULL);
}

void pop(t_list **stack)
{
	t_list *temp;

	if (!(*stack))
		return ;
	temp = (*stack)->next;
	free(*stack);
	*stack = temp;
}

void push(t_list **stack, int num)
{
	t_list *new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return ;
	new_node->data = num;
	new_node->next = *stack;
	*stack = new_node;
}

//
// t_list *getlast(t_list *stack)
// {
// 	t_list *tmp;
//
// 	if(!stack)
// 		return (NULL);
// 	tmp = stack;
// 	while(tmp->next)
// 		tmp = tmp->next;
// 	return (tmp);
// }

t_list *getprelast(t_list *stack)
{
	t_list *tmp;

	if(!stack)
		return (NULL);
	tmp = stack;
	while(tmp->next->next)
		tmp = tmp->next;
	return (tmp);
}
