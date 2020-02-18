/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortAlgo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <pvan-ren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 13:35:21 by pvan-ren          #+#    #+#             */
/*   Updated: 2020/02/18 16:09:27 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

int		min_sort(t_data *data)
{
	if (data->stack_a[0] > data->stack_a[1])
			sa(data);
		if (data->stack_a[1] < data->stack_a[0])
			sa(data);
		if (data->stack_a[2] < data->stack_a[1])
			rra(data);
	return (0);
}

int		sortAlgo(t_data *data)
{
	if (data->stack_a[0] > data->stack_a[1])
		sa(data);
	else if (data->size_a <= 3)
		min_sort(data);
		return (0);
}

// int		mid_sort(t_data *data)
// {
	
// }

// int		max_sort(t_data *data)
// {
	
// }