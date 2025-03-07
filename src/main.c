/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 21:46:52 by maghumya          #+#    #+#             */
/*   Updated: 2025/03/05 20:44:04 by maghumya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack *stack_a;

	stack_a = get_stack(argc, argv);
	if(!stack_a)
	{
		ft_putstr_fd("ERROR \n", 2);
		exit(0);
	}
	print_stack(stack_a);
	return (0);
}
