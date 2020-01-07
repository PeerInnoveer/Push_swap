/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <pvan-ren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 15:43:50 by pvan-ren          #+#    #+#             */
/*   Updated: 2020/01/07 14:35:44 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/header.h"

int		main(int ac, char **av)
{
	int		i;
	char	**args;
	char	*line;
	t_data	data;
	
	i = 0;
	if (ac > 1) {
		if (ac == 2)
			args = ft_strsplit(av[1], ' ');
		else
			args = av + 1;
		ft_make_stacks(&data, args);
		while (args[i])	{
			printf("%d\n", data.stack_a[i]);
			i++;
		}
	} else {
		ft_putstr("Error\n");
		exit(1);
	}
	while (get_next_line(0, &line) != 0)
		{
			if (ft_strcmp(line, "sa") == 0)
				ft_sa(&data);
			if (ft_strcmp(line, "sb") == 0)
				ft_sb(&data);
			if (ft_strcmp(line, "ss") == 0)
				ft_ss(&data);
			if (ft_strcmp(line, "pa") == 0)
				ft_pa(&data);
			if (ft_strcmp(line, "pb") == 0)
				ft_pb(&data);
			if (ft_strcmp(line, "ra") == 0)
				ft_ra(&data);
			if (ft_strcmp(line, "rb") == 0)
				ft_rb(&data);
			if (ft_strcmp(line, "rr") == 0)
				ft_rr(&data);
			if (ft_strcmp(line, "rra") == 0)
				ft_rra(&data);
			if (ft_strcmp(line, "rrb") == 0)
				ft_rrb(&data);
			else if (ft_strcmp(line, "rrr") == 0)
				ft_rrr(&data);
			i = 0;
			while (args[i])	{
				printf("%d\n", data.stack_a[i]);
				i++;
			}
		}
		if (ft_sort_is_ok(&data) == 0)
		{
			ft_putstr("OK\n");
			return (0);
		}
		else
			ft_putstr("KO\n");
		return (0);
	return (0);
}