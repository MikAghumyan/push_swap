/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 14:15:19 by maghumya          #+#    #+#             */
/*   Updated: 2025/02/24 16:41:33 by maghumya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_list {
	int data;
	struct s_list *next;
} t_list;

int isEmpty(t_list *stack);
void push(t_list **stack, int num);
void pop(t_list **stack);
void swap(t_list **stack);
// t_list *getlast(t_list *stack);
t_list *getprelast(t_list *stack);
void rotate(t_list **stack);
void rrotate(t_list **stack);

#endif 
