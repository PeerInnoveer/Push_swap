/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <pvan-ren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 13:36:25 by pvan-ren          #+#    #+#             */
/*   Updated: 2020/01/22 12:39:24 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "header.h"
#include "../include/pushswap.h"

int		make_stacks(t_data *data, char **av)
{
	int	size;

	size = 0;
	data->i = 0;
	data->j = 0;

	while (av[data->j] != 0)
		data->j++;
	data->size = data->j;
	data->size_a = data->size;
	data->size_init_a = data->size_a;
	data->size_b = 0;
	data->stack_a = (int *)malloc(sizeof(int) * data->size);
	data->stack_b = (int *)malloc(sizeof(int) * data->size);
	data->j = 0;
	while (av[data->i] != 0)
	{
		data->stack_a[data->j] = ft_atoi(av[data->i]);
		data->i++;
		data->j++;
	}
	return (0);
}