/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortAlgo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <pvan-ren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 13:35:21 by pvan-ren          #+#    #+#             */
/*   Updated: 2020/02/22 19:20:59 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

int		sort_three(t_data *data)
{	//mid, low, high
	if (data->stack_a[0] > data->stack_a[1] && data->stack_a[0] < data->stack_a[2])
		sa(data);
	//mid, high, low
	if (data->stack_a[0] < data->stack_a[1] && data->stack_a[0] > data->stack_a[2])
		rra(data);
	//high, mid, low
	if (data->stack_a[0] > data->stack_a[1] && data->stack_a[0] > data->stack_a[2] && data->stack_a[1] > data->stack_a[2])
	{
		sa(data);
		rra(data);
	}
	//high, low, mid
	if (data->stack_a[0] > data->stack_a[1] && data->stack_a[0] > data->stack_a[2] && data->stack_a[1] < data->stack_a[2])
		ra(data);
	//low, high, mid
	if (data->stack_a[0] < data->stack_a[1] && data->stack_a[0] < data->stack_a[2] && data->stack_a[1] > data->stack_a[2])
	{
		rra(data);
		sa(data);
	}
	return (0);
}

int		sort_five_four(t_data *data)
{
	int i;
	int small;
	
	while(data->size_a > 3)
	{
		small = data->stack_a[0];
		i = 1;
		// fprintf(stderr, "size of stack_a: %d\n", data->size_a);
		// fflush(stderr);
		while (i < data->size_a)
		{
			if (small > data->stack_a[i])
			{
				small = data->stack_a[i];
				i++;
			}
		}
		// fprintf(stderr, "small: %d\ndata->stack_a[0]: %d\ndata->stack_a[1]: %d\ndata->stack_a[2]: %d\ndata->stack_a[3]: %d\n", small, data->stack_a[0], data->stack_a[1], data->stack_a[2], data->stack_a[3]);
		// fflush(stderr);
		if (small == data->stack_a[0])
			pb(data);
		if (small == data->stack_a[1])
		{
			ra(data);
			pb(data);
		}
		if (small == data->stack_a[2])
		{
			ra(data);
			ra(data);
			pb(data);
		}
		if (small == data->stack_a[3])
		{
			if (data->size_a == 5)
			{
				rra(data);
			rra(data);
			pb(data);
			}
		}
		if (small == data->stack_a[4] && data->size_a > 4)
		{
			rra(data);
			pb(data);
		}
	}
	// fprintf(stderr, "\ndata->size_a: %d\n", data->size_a);
	// fflush(stderr);
		sort_three(data);
		sort_b(data);
		pa(data);
		pa(data);
	return (0);
}

// int		max_sort(t_data *data)
// {
// 	return (0);
// }

int		sortAlgo(t_data *data)
{
	if (data->size_a == 2)
	{
		if (data->stack_a[0] > data->stack_a[1])
			sa(data);
	}
	if (data->size_a == 3)
		sort_three(data);
	if (data->size_a > 3 && data->size_a <= 5)
		sort_five_four(data);
	// if (data->size_a > 5)
	// 	max_sort(data);
	return (0);
}