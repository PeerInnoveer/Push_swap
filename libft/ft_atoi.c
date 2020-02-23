/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 12:54:58 by pvan-ren          #+#    #+#             */
/*   Updated: 2018/07/16 14:33:27 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int			i;
	long long	ret;
	int			nbr;

	i = 0;
	ret = 0;
	nbr = 0;
	while (str[i] == '\t' || str[i] == '\r' || str[i] == '\n' || str[i] == '\f'
			|| str[i] == '\v' || str[i] == ' ')
		i++;
	if (str[i] == '-')
		nbr = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (ret == FT_LONG_MAX)
		return (-1);
	if (ret == FT_LONG_MIN)
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		ret = ret * 10 + str[i] - 48;
		i++;
	}
	return (nbr == 1 ? -ret : ret);
}
