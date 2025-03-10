/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 17:55:12 by maghumya          #+#    #+#             */
/*   Updated: 2025/03/10 05:06:16 by maghumya         ###   ########.fr       */
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

void	ft_error(char **args, int *is_allocated, t_stack **stack)
{
	free_args(args, is_allocated);
	free_stack(stack);
	ft_printf("ERROR\n");
	exit(1);
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
			ft_error(args, is_allocated, stack);
		i++;
	}
	return (result * sign);
}
