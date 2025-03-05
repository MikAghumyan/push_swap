/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_parser.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 20:24:31 by maghumya          #+#    #+#             */
/*   Updated: 2025/03/05 21:36:04 by maghumya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	free_args(char **args, const int *is_allocated)
{
	size_t	i;

	i = 0;
	if (*is_allocated)
	{
		i = 0;
		while (args[i])
			free(args[i++]);
		free(args);
	}
}

char	**parse_args(int argc, char **argv, int *is_allocated)
{
	char	**args;

	if (argc < 2)
	{
		ft_putstr_fd("ERROR \n", 2);
		exit(0);
	}
	if (argc == 2)
	{
		args = ft_split(argv[1], ' ');
		*(is_allocated) = 1;
	}
	else
		args = &argv[1];
	return (args);
}

void	get_stack(int argc, char **argv)
{
	ssize_t	i;
	char	**args;
	int		is_allocated;
	t_stack	*top;

	is_allocated = 0;
	args = parse_args(argc, argv, &is_allocated);
	i = 0;
	while (args[i + 1])
		i++;
	while (i >= 0)
	{
		push(&top, ft_atolli(args[i]));
		i--;
	}
	print_stack(top);
	free_args(args, &is_allocated);
	ft_printf("\n");
}
