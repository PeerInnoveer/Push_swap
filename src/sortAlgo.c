/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortAlgo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <pvan-ren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 13:35:21 by pvan-ren          #+#    #+#             */
/*   Updated: 2020/02/17 10:05:54 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

int		sortAlgo(t_data *data)
{
	while (data->size_a > 1)
	{
		if (data->stack_a[0] > data->stack_a[1])
		{
			sa(data);
			exit(0);
		}
	}
	return (0);
}

// int		min_sort(t_data *data)
// {
	
// }

// int		mid_sort(t_data *data)
// {
	
// }

// int		max_sort(t_data *data)
// {
	
// }