/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <pvan-ren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 14:46:59 by pvan-ren          #+#    #+#             */
/*   Updated: 2020/01/22 12:39:20 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

int		atoi_mod(const char *str)
{
	long long	result;
	long long	sign;

	sign = 1;
	result = 0;
	if (str)
	{
		while (ft_isspace(*str))
			str++;
		if (*str == '-')
			sign = -1;
		if (*str == '+' || *str == '-')
			str++;
		while (ft_isdigit(*str))
		{
			result = 10 * result + (*str - '0');
			str++;
		}
	}
	if (result > FT_INT_MAX || result < FT_INT_MIN)
	{
		ft_putstr_fd("Error\n", 2);
		exit(0);
	}
	return ((int)result * sign);
}

int		check(char *s)
{
	int		i;

	i = 0;
	if (s[i] == '-')
		i++;
	while (s[i] != '\0')
	{
		if (s[i] != '-' && s[i] != '+' && !ft_isdigit(s[i]) &&
				!ft_isspace(s[i]))
			return (0);
		i++;
	}
	return (1);
}

int		check2(int argc, char **argv)
{
	int		i;
	int		j;
	int		tmp;

	i = 1;
	while (i < argc)
	{
		tmp = atoi_mod(argv[i]);
		j = i;
		while (j < argc - 1)
		{
			if (tmp > FT_INT_MAX || tmp < FT_INT_MIN)
				return (0);
			if (tmp == atoi_mod(argv[j + 1]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		error_check(int argc, char **argv)
{
	int		i;
	int		count;

	i = 1;
	count = 1;
	while (i < argc)
	{
		if (check(argv[i]))
			count++;
		else
			break ;
		i++;
	} 
	if (check2(argc, argv) == 1)
		return ((count == argc) ? 1 : 0);
	return (0);
}