/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 14:35:36 by pvan-ren          #+#    #+#             */
/*   Updated: 2018/06/02 14:42:31 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t len_n;
	size_t i;

	if (!*n)
		return ((char*)h);
	if (!len || (len_n = ft_strlen(n)) > ft_strlen(h) || len_n > len)
		return (NULL);
	i = 0;
	while (*h && ft_strncmp(h, n, len_n))
	{
		if (i++ >= len - len_n)
			return (NULL);
		h++;
	}
	return ((char*)h);
}
