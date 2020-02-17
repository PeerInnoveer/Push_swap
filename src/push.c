/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <pvan-ren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 12:40:04 by pvan-ren          #+#    #+#             */
/*   Updated: 2020/02/17 12:55:23 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

int		pa(t_data *data)
{
	int		i;

	if (data->size_b > 0) {
		data->size_b--;
		data->size_a++;
		i = data->size_a - 1;
		while (i >= 0)
		{
			data->stack_a[i] = data->stack_a[i - 1];
			i--;
		}
		data->stack_a[0] = data->stack_b[0];
		i = 0;
		while (i <= data->size_b)
		{
			data->stack_b[i] = data->stack_b[i + 1];
			i++;
		}
	}
	return (0);
}

int		pb(t_data *data)
{
	int		i;

	if (data->size_a > 0) {
		data->size_a--;
		data->size_b++;
		i = data->size_b - 1;
		while (i >= 0)
		{
			data->stack_b[i] = data->stack_b[i - 1];
			i--;
		}
		data->stack_b[0] = data->stack_a[0];
		i = 0;
		while (i < data->size_a)
		{
			data->stack_a[i] = data->stack_a[i + 1];
			i++;
		}	
	}
	return (0);
}