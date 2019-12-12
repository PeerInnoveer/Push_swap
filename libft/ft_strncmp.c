/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 11:57:56 by pvan-ren          #+#    #+#             */
/*   Updated: 2018/06/02 14:26:06 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	if (!n)
		return (0);
	i = 1;
	while (*s1 == *s2)
	{
		if (!*s1++ || i++ == n)
			return (0);
		s2++;
	}
	return ((unsigned char)(*s1) - (unsigned char)(*s2));
}
