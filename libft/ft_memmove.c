/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 14:05:40 by pvan-ren          #+#    #+#             */
/*   Updated: 2018/06/05 09:46:00 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define MB 1024 * 1024

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	buf[MB];
	size_t	acc;
	size_t	cpy;

	acc = 0;
	while (acc < len)
	{
		if (len - acc > MB)
			cpy = MB;
		else
			cpy = len - acc;
		ft_memcpy(buf, src + acc, cpy);
		ft_memcpy(dst + acc, buf, cpy);
		acc += cpy;
	}
	return (dst);
}
