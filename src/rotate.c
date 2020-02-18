/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <pvan-ren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 12:40:38 by pvan-ren          #+#    #+#             */
/*   Updated: 2020/02/18 13:27:04 by pvan-ren         ###   ########.fr       */
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
	print_name(data, "ra\n");
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
	print_name(data, "rb\n");
}

int		rr(t_data *data)
{
	ra(data);
	rb(data);
	print_name(data, "rr\n");
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
	print_name(data, "rra\n");
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
	print_name(data, "rrb\n");
	return (0);
}

int		rrr(t_data *data)
{
	rra(data);
	rrb(data);
	print_name(data, "rrr\n");
	return (0);
}

void	print_name(t_data *data, char *str)
{
	if (data->print == 1)
		data->print = 0;
	ft_putstr(str);
}