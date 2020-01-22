/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <pvan-ren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 13:34:08 by pvan-ren          #+#    #+#             */
/*   Updated: 2020/01/22 12:39:30 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

int		main(int ac, char **av)
{
	int		i;
	// char	**args;
	t_data	data;

	i = 1;
	if (ac > 1) {
		if (ac == 2)
			ft_putstr("Argument == to 2\n");
			exit(1);
	} else {
		exit(1);
	}
	while (av[i])
	{
		if (string_is_nb(av[i]) == -1)
			return (0);
		i++;
	}
	data.print = 1;
	make_stacks(&data, av);
	if (sort_is_ok(&data) == 0)
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