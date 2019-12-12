/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 14:35:05 by pvan-ren          #+#    #+#             */
/*   Updated: 2018/06/02 16:16:14 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *h, const char *n)
{
	size_t len_n;

	if (!*n)
		return ((char*)h);
	len_n = ft_strlen(n);
	while (*h && ft_strncmp(h, n, len_n))
		h++;
	if (*h)
		return ((char*)h);
	return (NULL);
}
