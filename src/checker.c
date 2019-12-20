/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <pvan-ren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 15:43:50 by pvan-ren          #+#    #+#             */
/*   Updated: 2019/12/20 11:24:58 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/header.h"

int args_valid(char **av) {

	char **args;
	t_data data;

	data.k = 0;
	if (args == 1)
		exit(0);
	if (args == 2) {
		char **args = ft_strsplit(av[data.k], ' ');
		while (av[++data.k]) {
		}
		return (1);
	} else
		return (-1);
}

int		main(int ac, char **av)
{
	int		i;
	char	**args;
	t_data	data;
	
	// i = 0;
	// if (ac == 1)
	// 	exit(0);
	// if (ac == 2) {
	// 	char **args = ft_strsplit(av[1], ' ');
	// 	// data.stack_a = (int *)malloc(sizeof(int) * 1000);
	// 	ft_make_stacks(&data, args);
	// 	while (args[i])	{
	// 		// data.stack_a[i] = ft_atoi(args[i]);
	// 		printf("%d\n", data.stack_a[i]);
	// 		i++;
	// 	}
	// } else if (ac > 1) {
	// 	while (av[i] != 0) {
	// 		printf("%d\n", data.stack_a[i]);
	// 		i++;
	// 		ft_make_stacks(&data, av);
	// 	}
	// } else
	// 	ft_putstr("Error\n");
		
	while (av[data.k])
	{
		if (!args_valid(av[++data.k])) //Setup function..
		{
			ft_putstr("Error\n");
			return (0);
		}
		else if (args_valid(av[data.k]))
		{
			printf("%d\n", data.stack_a[i]);
			i++;
			ft_make_stacks(&data, av);
			while (get_next_line(0, &args) != 0)
			{
				if (ft_strcmp(args, "sa") == 0)
					ft_sa(&data);
				if (ft_strcmp(args, "sb") == 0)
					ft_sb(&data);
				if (ft_strcmp(args, "ss") == 0)
					ft_ss(&data);
				if (ft_strcmp(args, "pa") == 0)
					ft_pa(&data);
				if (ft_strcmp(args, "pb") == 0)
					ft_pb(&data);
				if (ft_strcmp(args, "ra") == 0)
					ft_ra(&data);
				if (ft_strcmp(args, "rb") == 0)
					ft_rb(&data);
				if (ft_strcmp(args, "rr") == 0)
					ft_rr(&data);
				if (ft_strcmp(args, "rra") == 0)
					ft_rra(&data);
				if (ft_strcmp(args, "rrb") == 0)
					ft_rrb(&data);
				else if (ft_strcmp(args, "rrr") == 0)
					ft_rrr(&data);
			}
			if (ft_sort_is_ok(&data) == -1)
			{
				ft_putstr("OK\n");
				return (0);
			}
			else
				ft_putstr("KO\n");
			return (0);
		}
	}
	return (0);
}