/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <pvan-ren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 12:40:38 by pvan-ren          #+#    #+#             */
/*   Updated: 2020/01/22 13:39:11 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

int		ra(t_data *data)
{
	int		i;
	int		tmp;

	i = 0;
	tmp = data->stack_a[0];
	while (i <= data->size_a)
	{
		data->stack_a[i] = data->stack_a[i + 1];
		i++;
	}
	data->stack_a[data->size_a - 1] = tmp;
	return (0);
}

int		rb(t_data *data)
{
	int		i;
	int		tmp;

	i = 0;
	tmp = data->stack_b[0];
	while (i <= data->size_b)
	{
		data->stack_b[i] = data->stack_b[i + 1];
		i++;
	}
	data->stack_b[data->size_b - 1] = tmp;
	return (0);
}

int		rr(t_data *data)
{
	ra(data);
	rb(data);
	return (0);
}

int		rra(t_data *data)
{
	int		i;
	int		tmp;

	i = data->size_a;
	tmp = data->stack_a[data->size_a - 1];
	while (i >= 0)
	{
		data->stack_a[i] = data->stack_a[i - 1];
		i--;
	}
	data->stack_a[0] = tmp;
	return (0);
}

int		rrb(t_data *data)
{
	int		i;
	int		tmp;

	i = data->size_b;
	tmp = data->stack_b[data->size_b - 1];
	while (i >= 0)
	{
		data->stack_b[i] = data->stack_b[i - 1];
		i--;
	}
	data->stack_b[0] = tmp;
	return (0);
}

int		rrr(t_data *data)
{
	rra(data);
	rrb(data);
	return (0);
}

void	print_name(t_data *data, char *str)
{
	if (data->print == 1)
		data->print = 0;
	ft_putstr(str);
}