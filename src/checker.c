/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <pvan-ren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 15:43:50 by pvan-ren          #+#    #+#             */
/*   Updated: 2020/01/22 12:39:11 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

int args_valid(char **args)
{
	int i;

	i = 0;
	while (args[i])
	{
		if (string_is_nb(args[i]) == -1)
			return (-1);
		i++;
	}
	return (1); 
}

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
		if (args_valid(args) == -1)
		{
			ft_putstr("Error\n");
			exit(1);
		}
		if (!error_check(ac, av) || ac == 1)
		{
			if (!error_check(ac, av))
				ft_putstr_fd("Error\n", 2);
		}
		make_stacks(&data, args);
		print_tab(&data);
	} else 
		exit(1);
	while (get_next_line(0, &line) > 0)
		{
			if (ft_strcmp(line, "sa") == 0)
				sa(&data);
			if (ft_strcmp(line, "sb") == 0)
				sb(&data);
			if (ft_strcmp(line, "ss") == 0)
				ss(&data);
			if (ft_strcmp(line, "pa") == 0)
				pa(&data);
			if (ft_strcmp(line, "pb") == 0)
				pb(&data);
			if (ft_strcmp(line, "ra") == 0)
				ra(&data);
			if (ft_strcmp(line, "rb") == 0)
				rb(&data);
			if (ft_strcmp(line, "rr") == 0)
				rr(&data);
			if (ft_strcmp(line, "rra") == 0)
				rra(&data);
			if (ft_strcmp(line, "rrb") == 0)
				rrb(&data);
			else if (ft_strcmp(line, "rrr") == 0)
				rrr(&data);
			i = 0;
			while (args[i])	{
				i++;
			}
				print_tab(&data);
		}
		if (sort_is_ok(&data) == 0)
			ft_putstr("OK\n");
		else
			ft_putstr("KO\n");
	return (0);
}