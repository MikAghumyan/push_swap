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

# include "./printf/ft_printf.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				data;
	struct s_list	*next;
}					t_list;

void				ft_putstr(char *str);

int					isEmpty(t_list *stack);
void				push(t_list **stack, int num);
void				pop(t_list **stack);
void				swap(t_list **stack);
// t_list *getlast(t_list *stack);
t_list				*getprelast(t_list *stack);
void				rotate(t_list **stack);
void				rrotate(t_list **stack);
void				pa(t_list **a, t_list **b);
void				pb(t_list **b, t_list **a);
void				ra(t_list **a);
void				rb(t_list **b);
void				rr(t_list **a, t_list **b);
void				rra(t_list **a);
void				rrb(t_list **b);
void				rrr(t_list **a, t_list **b);
void				sa(t_list **a);
void				sb(t_list **b);
void				ss(t_list **a, t_list **b);

#endif
