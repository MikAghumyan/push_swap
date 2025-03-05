/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 14:15:19 by maghumya          #+#    #+#             */
/*   Updated: 2025/02/25 18:46:01 by maghumya         ###   ########.fr       */
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
	int				data;
	struct s_stack_node	*next;
}					t_stack;

void				ft_putstr(char *str);
int					ft_atolli(const char *nptr);

int					isEmpty(t_stack *stack);
void				push(t_stack **stack, int num);
void				pop(t_stack **stack);
void				swap(t_stack **stack);
// t_stack *getlast(t_stack *stack);
t_stack				*getprelast(t_stack *stack);
void				rotate(t_stack **stack);
void				rrotate(t_stack **stack);
void				pa(t_stack **a, t_stack **b);
void				pb(t_stack **b, t_stack **a);
void				ra(t_stack **a);
void				rb(t_stack **b);
void				rr(t_stack **a, t_stack **b);
void				rra(t_stack **a);
void				rrb(t_stack **b);
void				rrr(t_stack **a, t_stack **b);
void				sa(t_stack **a);
void				sb(t_stack **b);
void				ss(t_stack **a, t_stack **b);

#endif
