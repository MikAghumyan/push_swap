/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 14:15:19 by maghumya          #+#    #+#             */
/*   Updated: 2025/03/07 16:03:07 by maghumya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack_node
{
	int					data;
	struct s_stack_node	*next;
}						t_stack;

void					print_stack(t_stack *temp);
int						ft_atoi_valid(const char *nptr);

char					**parse_args(int argc, char **argv, int *is_allocated);
int						dup_checker(t_stack *stack, int num);
void					fill_stack(char **args, t_stack **new_stack);
t_stack					*get_stack(int argc, char **argv);

int						isEmpty(t_stack *stack);
void					push(t_stack **stack, int num);
void					pop(t_stack **stack);
void					free_stack(t_stack **stack);
void					swap(t_stack **stack);
// t_stack *getlast(t_stack *stack);
t_stack					*getprelast(t_stack *stack);
void					rotate(t_stack **stack);
void					rrotate(t_stack **stack);
void					pa(t_stack **a, t_stack **b);
void					pb(t_stack **b, t_stack **a);
void					ra(t_stack **a);
void					rb(t_stack **b);
void					rr(t_stack **a, t_stack **b);
void					rra(t_stack **a);
void					rrb(t_stack **b);
void					rrr(t_stack **a, t_stack **b);
void					sa(t_stack **a);
void					sb(t_stack **b);
void					ss(t_stack **a, t_stack **b);

#endif
