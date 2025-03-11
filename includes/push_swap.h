/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 14:15:19 by maghumya          #+#    #+#             */
/*   Updated: 2025/03/11 23:28:42 by maghumya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdbool.h>
# include <stdint.h>

typedef struct s_stack_node
{
	int					data;
	size_t				index;
	struct s_stack_node	*next;
}						t_stack;

void					print_stack(t_stack *temp);
int						ft_atoi_valid(char **args, ssize_t args_i,
							int *is_allocated, t_stack **stack);
void					ft_error(char **args, int *is_allocated,
							t_stack **stack);
void					get_indexes(t_stack *stack);

void					free_args(char **args, int *is_allocated);
char					**parse_args(int argc, char **argv, int *is_allocated);
int						dup_checker(t_stack *stack, int num);
void					fill_stack(char **args, int *is_allocated,
							t_stack **new_stack);
t_stack					*get_stack(int argc, char **argv);

void					sort_stack(t_stack **a, t_stack **b);
void					make_butterfly(t_stack **a, t_stack **b);

size_t					get_stack_size(t_stack *stack);
size_t					get_max_position(t_stack *stack);

int						is_empty(t_stack *stack);
void					push(t_stack **stack, int num, size_t index);
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
