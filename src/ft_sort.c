/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <pvan-ren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 12:40:50 by pvan-ren          #+#    #+#             */
/*   Updated: 2020/01/07 13:33:07 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/header.h"

void	ft_print_tab(t_data *data)
{
	int	i;
	
	i = 0;
	ft_putstr("stack_a : ");
	while (i < data->size_a)
	{
		ft_putnbr(data->stack_a[i]);
		ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
	i = 0;
	ft_putstr("stack_b : ");
	while (i < data->size_b)
	{
		ft_putnbr(data->stack_b[i]);
		ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}

int		ft_sort_is_ok(t_data *data)
{
	int	i;

	i = data->size_a - 1;
	while (i >= 0)
	{
		if (data->stack_a[i - 1] < data->stack_a[i])
			i--;
		else
			return (-1);
	}
	if (data->size_a != data->size_init_a)
		return (-1);
	return (0);
}

int		ft_sort_b_is_ok(t_data *data)
{
	int	i;

	i = data->size_b - 1;
	while (i > 0)
	{
		if (data->stack_b[i - 1] > data->stack_b[i])
			i--;
		else
			return (-1);
	}
	return (0);
}

void	ft_sort_b(t_data *data)
{
	if (data->size_b == 1)
		return ;
	if (data->stack_b[data->size_b] && data->stack_b[0] < data->stack_b[data->size_b - 1])
		ft_rb(data);
	else if (data->stack_b[1] && data->stack_b[0] < data->stack_b[1])
		ft_sb(data);
}
