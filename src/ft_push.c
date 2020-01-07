/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <pvan-ren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 12:40:04 by pvan-ren          #+#    #+#             */
/*   Updated: 2020/01/07 13:33:24 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/header.h"

int		ft_pa(t_data *data)
{
	int		i;
	int		tmp2;

	tmp2 = data->stack_a[data->size_b - 1];
	data->size_a++;
	data->size_b--;
	i = data->size_a;
	while (i >= 0)
	{
		data->stack_a[i] = data->stack_a[i - 1];
		i--;
	}
	data->stack_a[data->size_a] = tmp2;
	data->stack_a[0] = data->stack_b[0];
	i = 0;
	while (i < data->size_b)
	{
		data->stack_b[i] = data->stack_b[i + 1];
		i++;
	}
	ft_print_name(data, "pa\n");
	return (0);
}

int		ft_pb(t_data *data)
{
	int		i;
	int		tmp2;

	tmp2 = data->stack_b[data->size_b - 1];
	data->size_a--;
	data->size_b++;
	i = data->size_b;
	while (i >= 0)
	{
		data->stack_b[i] = data->stack_b[i - 1];
		i--;
	}
	data->stack_b[data->size_b] = tmp2;
	data->stack_b[0] = data->stack_a[0];
	i = 0;
	while (i <= data->size)
	{
		if (data->stack_a[i + 1])
			data->stack_a[i] = data->stack_a[i + 1];
		i++;
	}
	ft_print_name(data, "pb\n");
	return (0);
}