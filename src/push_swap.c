/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <pvan-ren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 13:34:08 by pvan-ren          #+#    #+#             */
/*   Updated: 2020/02/14 11:18:15 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

int		main(int ac, char **av)
{
	int		i;
	char	**args;
	t_data	data;

	i = 1;
	if (ac > 1) {
		if (ac == 2)
			args = ft_strsplit(&av[1][i], ' ');
		else
			args = av + 1;
		if (!error_check(ac, av) || ac == 1)
		{
			if (!error_check(ac, av))
				ft_putstr_fd("Error\n", 2);
				exit(1);
		}
	} else {
		exit(1);
	}
	while (args[i])
		i++;
	make_stacks(&data, av);
	if (sort_is_ok(&data) == 0)
	{
		ft_putchar('\n');
		return (0);
	} else {
		// else if (len(data->size_a) < certain number, use min_sort)
		// else if (len(data->size_a) > certain number && < certain number, use mid_sort)
		// else (use max_sort)
		sortAlgo(&data);
		ft_putchar('\n');
		free(data.stack_a);
		free(data.stack_b);
	}
	return (0);
}