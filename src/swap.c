/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <pvan-ren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 12:41:06 by pvan-ren          #+#    #+#             */
/*   Updated: 2020/02/18 13:27:39 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

int		sa(t_data *data)
{
	int		tmp;

	if (!data->stack_a[1])
		return (0);
	tmp = data->stack_a[0];
	data->stack_a[0] = data->stack_a[1];
	data->stack_a[1] = tmp;
	print_name(data, "sa\n");
	return (0);
}

int		sb(t_data *data)
{
	int		tmp;

	if (!data->stack_b[1])
		return (0);
	tmp = data->stack_b[0];
	data->stack_b[0] = data->stack_b[1];
	data->stack_b[1] = tmp;
	print_name(data, "sb\n");
	return (0);
}

int		ss(t_data *data)
{
	sa(data);
	sb(data);
	print_name(data, "ss\n");
	return (0);
}