/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_word_count.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 15:52:20 by pvan-ren          #+#    #+#             */
/*   Updated: 2018/08/30 15:52:27 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_word_count(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (*s && *s != c)
		{
			i++;
			while (*s && *s != c)
				s++;
		}
		if (*s && *s == c)
		{
			while (*s && *s == c)
				s++;
		}
	}
	return (i);
}
