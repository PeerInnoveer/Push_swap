/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew_two.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 13:13:07 by pvan-ren          #+#    #+#             */
/*   Updated: 2018/07/16 14:29:54 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strnew_two(size_t x, size_t y)
{
	char	**tab;
	char	*board;
	size_t	i;

	i = 0;
	tab = (char**)malloc(sizeof(char*) * y);
	board = (char*)malloc(sizeof(char) * x * y);
	while (i < y)
	{
		tab[i] = &board[i * x];
		i++;
	}
	return (tab);
}
