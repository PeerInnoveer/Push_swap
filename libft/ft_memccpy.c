/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 12:11:09 by pvan-ren          #+#    #+#             */
/*   Updated: 2018/06/05 09:21:15 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;

	i = -1;
	while (++i < n)
	{
		*(unsigned char*)dst++ = *(unsigned char*)src++;
		if (((unsigned char*)dst)[-1] == (unsigned char)c)
			return (dst);
	}
	return (NULL);
}
