/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <pvan-ren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 13:34:08 by pvan-ren          #+#    #+#             */
/*   Updated: 2020/01/07 13:34:44 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/header.h"

int		main(int ac, char **av)
{
	t_data	data;

	data.k = 1;
	if (ac == 2)
		exit(0);
	while (av[data.k])
	{
		if (ft_string_is_nb(av[data.k]) == -1)
			return (0);
		data.k++;
	}
	data.print = 1;
	ft_make_stacks(&data, av);
	if (ft_sort_is_ok(&data) == 0)
	{
		ft_putchar('\n');
		return (0);
	} else {
		sort(&data);
		ft_putchar('\n');
		free(data.stack_a);
		free(data.stack_b);
	}
	return (0);
}