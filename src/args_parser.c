/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_parser.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 20:24:31 by maghumya          #+#    #+#             */
/*   Updated: 2025/03/12 14:33:37 by maghumya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	free_args(char **args, int *is_allocated)
{
	size_t	i;

	i = 0;
	if (!args || !is_allocated)
		return ;
	if (*is_allocated)
	{
		i = 0;
		while (args[i])
			free(args[i++]);
		free(args);
		args = NULL;
		*is_allocated = 0;
	}
}

char	**parse_args(int argc, char **argv, int *is_allocated)
{
	char	**args;

	if (argc < 2)
		return (NULL);
	if (argc == 2)
	{
		args = ft_split(argv[1], ' ');
		if (!args)
			return (NULL);
		*(is_allocated) = 1;
	}
	else
		args = &argv[1];
	return (args);
}

int	dup_checker(t_stack *stack, int num)
{
	while (stack)
	{
		if (stack->data == num)
			return (0);
		stack = stack->next;
	}
	return (1);
}

void	fill_stack(char **args, int *is_allocated, t_stack **new_stack)
{
	ssize_t	i;
	int		new_nb;

	i = 0;
	while (args[i + 1])
		i++;
	while (i >= 0)
	{
		new_nb = ft_atoi_valid(args, i, is_allocated, new_stack);
		if (!dup_checker(*new_stack, new_nb))
			ft_error(args, is_allocated, new_stack, NULL);
		push(new_stack, new_nb, 0);
		--i;
	}
}

t_stack	*get_stack(int argc, char **argv)
{
	char	**args;
	int		is_allocated;
	t_stack	*new_stack;

	new_stack = NULL;
	is_allocated = 0;
	args = parse_args(argc, argv, &is_allocated);
	if (!args)
		return (NULL);
	fill_stack(args, &is_allocated, &new_stack);
	free_args(args, &is_allocated);
	return (new_stack);
}
