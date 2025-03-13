/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 17:55:12 by maghumya          #+#    #+#             */
/*   Updated: 2025/03/12 14:32:25 by maghumya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	print_stack(t_stack *temp)
{
	while (temp)
	{
		ft_printf("%d ", temp->data);
		temp = temp->next;
	}
	ft_printf("\n");
}

void	ft_error(char **args, int *is_allocated, t_stack **stack_a,
		t_stack **stack_b)
{
	free_args(args, is_allocated);
	free_stack(stack_a);
	free_stack(stack_b);
	ft_printf("ERROR\n");
	exit(1);
}

void	get_indexes(t_stack *stack)
{
	t_stack	*temp;
	t_stack	*temp_loop;
	size_t	i;

	temp = stack;
	while (stack)
	{
		i = 0;
		temp_loop = temp;
		while (temp_loop)
		{
			if (stack->data > temp_loop->data)
				i++;
			temp_loop = temp_loop->next;
		}
		stack->index = i;
		stack = stack->next;
	}
}

int	ft_atoi_valid(char **args, ssize_t args_i, int *is_allocated,
		t_stack **stack)
{
	int		i;
	int		sign;
	char	*nptr;
	int64_t	result;

	nptr = args[args_i];
	i = 0;
	sign = 1;
	result = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-')
		sign = -1;
	if (nptr[i] == '-' || nptr[i] == '+')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + nptr[i] - '0';
		if (result * sign > INT_MAX || result * sign < INT_MIN)
			ft_error(args, is_allocated, stack, NULL);
		i++;
	}
	if (nptr[i] && (nptr[i] < '0' || nptr[i] > '9'))
		ft_error(args, is_allocated, stack, NULL);
	return (result * sign);
}
