/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghumya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 21:46:52 by maghumya          #+#    #+#             */
/*   Updated: 2025/03/04 21:53:37 by maghumya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	int i;

	if (argc < 2)
	{
		ft_printf("ERROR \n");
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		ft_printf("%d ", ft_atolli(argv[i]));
		i++;
	}
	ft_printf("\n");
	return (0);
}
