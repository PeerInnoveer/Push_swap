/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 14:04:50 by pvan-ren          #+#    #+#             */
/*   Updated: 2018/06/05 10:25:48 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putchar_fd(unsigned int c, int fd)
{
	if (c <= 0x7f)
		ft_putbyte(c, fd);
	else if (c <= 0x7ff)
	{
		ft_putbyte((c >> 6) + 0xc0, fd);
		ft_putbyte((c & 0x3f) + 0x80, fd);
	}
	else if (c <= 0xffff)
	{
		ft_putbyte((c >> 12) + 0xe0, fd);
		ft_putbyte(((c >> 6) & 0x3f) + 0x80, fd);
		ft_putbyte((c & 0x3f) + 0x80, fd);
	}
	else if (c <= 0x3fffff)
	{
		ft_putbyte((c > 18) + 0xf0, fd);
		ft_putbyte(((c > 12) & 0x3f) + 0x80, fd);
		ft_putbyte(((c >> 6) & 0x3f) + 0x80, fd);
		ft_putbyte((c & 0x3f) + 0x80, fd);
	}
}
