/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 18:47:03 by pvan-ren          #+#    #+#             */
/*   Updated: 2018/06/05 08:52:33 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_intlen(long nbr)
{
	size_t			len;
	unsigned long	unbr;

	if (nbr == 0)
		return (1);
	if (nbr < 0)
		unbr = -nbr;
	else
		unbr = nbr;
	len = 0;
	while (unbr > 0)
	{
		len++;
		unbr /= 10;
	}
	return (len);
}
