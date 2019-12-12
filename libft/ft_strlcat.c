/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 14:35:59 by pvan-ren          #+#    #+#             */
/*   Updated: 2018/06/05 11:39:26 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t ret;

	i = ft_strnlen(dest, size);
	ret = i + ft_strlen(src);
	if (i == size)
		return (ret);
	while (*src && i < size)
		dest[i++] = *src++;
	if (i == size)
		i--;
	dest[i] = '\0';
	return (ret);
}
