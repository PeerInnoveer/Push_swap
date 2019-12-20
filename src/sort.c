/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 13:35:21 by pvan-ren          #+#    #+#             */
/*   Updated: 2018/09/26 12:10:45 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		sort(t_data *data)
{
	int		i;
	int		j;

	i = 0;
	j = 0;

	while (data->size_a > 1)
	{
		if (data->stack_a[0] > data->stack_a[1])
		{
			ft_sa(data);
			exit(0);
		}
	}
	return (0);
}
