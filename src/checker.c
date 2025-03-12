/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 14:04:06 by maghumya          #+#    #+#             */
/*   Updated: 2025/03/12 14:55:20 by maghumya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../get_next_line/get_next_line.h"
#include "../includes/push_swap.h"

void	sort_by_instruction(t_stack **a, t_stack **b, char *line)
{
	if (!ft_strncmp(line, "sa\n", 4))
		sa(a);
	else if (!ft_strncmp(line, "sb\n", 4))
		sb(b);
	else if (!ft_strncmp(line, "ss\n", 4))
		ss(a, b);
	else if (!ft_strncmp(line, "pa\n", 4))
		pa(a, b);
	else if (!ft_strncmp(line, "pb\n", 4))
		pb(b, a);
	else if (!ft_strncmp(line, "ra\n", 4))
		ra(a);
	else if (!ft_strncmp(line, "rb\n", 4))
		ra(b);
	else if (!ft_strncmp(line, "rr\n", 4))
		rr(a, b);
	else if (!ft_strncmp(line, "rra\n", 5))
		rra(a);
	else if (!ft_strncmp(line, "rrb\n", 5))
		rrb(b);
	else if (!ft_strncmp(line, "rrr\n", 5))
		rrr(a, b);
	else
		ft_error(NULL, NULL, a, b);
}

void	do_instructions(t_stack **a, t_stack **b)
{
	char	*line;

	line = get_next_line(0);
	while (line)
	{
		sort_by_instruction(a, b, line);
		free(line);
		line = get_next_line(0);
	}
	free(line);
}

int	main(int argc, char **argv)
{
	t_stack *a;
	t_stack *b;

	if (argc == 1)
		return (0);
	a = get_stack(argc, argv);
	b = NULL;
	if (!a)
		ft_error(NULL, NULL, NULL, NULL);
	do_instructions(&a, &b);
	if (is_sorted(a) && is_empty(b))
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	free_stack(&a);
	free_stack(&b);
	return (0);
}