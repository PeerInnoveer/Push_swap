/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortAlgo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <pvan-ren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 13:35:21 by pvan-ren          #+#    #+#             */
/*   Updated: 2020/02/21 14:21:56 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

int		min_sort(t_data *data)
{
	if (data->stack_a[0] > data->stack_a[1])
		sa(data);
	if (data->stack_a[1] > data->stack_a[2])
		rra(data);
	return (0);
}

int		min2_sort(t_data *data)
{
	int i;
	int small;
	
	small = data->stack_a[0];
	i = 1;
	while (i < data->size_a)
	{
		if (small > data->stack_a[i])
		{
			small = data->stack_a[i];
		}
		if (small == data->stack_a[0])
			pb(data);
		else if (small == data->stack_a[1])
		{
			sa(data);
			pb(data);
		}
		else if (small == data->stack_a[2])
		{
			ra(data);
			ra(data);
			pb(data);
		}
		else if (small == data->stack_a[3])
		{
			rra(data);
			rra(data);
			pb(data);
		}
		else if (small == data->stack_a[4])
		{
			rra(data);
			pb(data);
		}
			i++;
	}
	// printf("Smallest element in an Array = %d\n", small);
	return (0);
}

int		max_sort(t_data *data)
{
	if (data->stack_a[0] > data->stack_a[1])
		ft_putstr("Proper sorting: 6 to infinit int's\n");
	return (0);
}

int		sortAlgo(t_data *data)
{
	if (data->size_a == 2)
	{
		if (data->stack_a[0] > data->stack_a[1])
			sa(data);
	}
	if (data->size_a == 3)
		min_sort(data);
	if (data->size_a > 3 && data->size_a <= 5)
		min2_sort(data);
	if (data->size_a > 5)
		max_sort(data);
	return (0);
}

