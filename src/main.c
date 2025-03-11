/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 21:46:52 by maghumya          #+#    #+#             */
/*   Updated: 2025/03/11 14:07:13 by maghumya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;

	// t_stack *stack_b;
	// t_stack *temp;
	// stack_b = NULL;
	stack_a = get_stack(argc, argv);
	if (!stack_a)
		ft_error(NULL, NULL, NULL);
	get_indexes(stack_a);
	print_stack(stack_a);
	// temp = stack_a;
	// while(temp)
	// {
	// 	ft_printf("index: %d\n", temp->index);
	// 	temp = temp->next;
	// }
	free_stack(&stack_a);
	return (0);
}
