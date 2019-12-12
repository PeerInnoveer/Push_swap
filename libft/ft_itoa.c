/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 11:42:18 by pvan-ren          #+#    #+#             */
/*   Updated: 2018/06/05 09:12:29 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int nbr)
{
	int				size;
	unsigned int	unbr;
	int				neg;
	char			*str;

	neg = 0;
	if (nbr < 0)
		neg = 1;
	size = ft_intlen(nbr) + neg;
	unbr = ft_abs(nbr);
	if (!(str = (char*)ft_memalloc(sizeof(*str) * (size + 1))))
		return (NULL);
	if (neg)
		str[0] = '-';
	str[--size] = (unbr % 10) + '0';
	while (--size >= neg)
		str[size] = ((unbr /= 10) % 10) + '0';
	return (str);
}
