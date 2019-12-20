/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <pvan-ren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 12:41:06 by pvan-ren          #+#    #+#             */
/*   Updated: 2019/12/13 12:13:26 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_sa(t_data *data)
{
	int		tmp;

	if (!data->stack_a[1])
		return (0);
	tmp = data->stack_a[0];
	data->stack_a[0] = data->stack_a[1];
	data->stack_a[1] = tmp;
	ft_print_name(data, "sa\n");
	return (0);
}

int		ft_sb(t_data *data)
{
	int		tmp;

	if (!data->stack_b[1])
		return (0);
	tmp = data->stack_b[0];
	data->stack_b[0] = data->stack_b[1];
	data->stack_b[1] = tmp;
	ft_print_name(data, "sb\n");
	return (0);
}

int		ft_ss(t_data *data)
{
	ft_sa(data);
	ft_sb(data);
	ft_print_name(data, "ss\n");
	return (0);
}
