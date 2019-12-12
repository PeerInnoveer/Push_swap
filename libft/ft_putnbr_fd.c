/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 14:20:58 by pvan-ren          #+#    #+#             */
/*   Updated: 2018/06/05 13:22:03 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_putnbr_rec(unsigned int un, int fd)
{
	if (un > 0)
	{
		ft_putnbr_rec(un / 10, fd);
		ft_putchar_fd((un % 10) + '0', fd);
	}
}

void			ft_putnbr_fd(int n, int fd)
{
	unsigned int un;

	if (fd < 0)
		return ;
	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	if (n < 0)
		ft_putchar_fd('-', fd);
	un = ft_abs(n);
	ft_putnbr_rec(un, fd);
}
