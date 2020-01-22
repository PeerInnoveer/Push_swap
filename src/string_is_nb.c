/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_is_nb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <pvan-ren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 13:34:42 by pvan-ren          #+#    #+#             */
/*   Updated: 2020/01/22 12:39:58 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

int		string_is_nb(char *str)
{
	int	i;
	i = 0;

	if (str[0] == '-' && str[1])
		i++;
	while (str[i] != 0)
	{
		if (!ft_isdigit(str[i]))
			return (-1);
		i++;
	}
	return (0);
}
