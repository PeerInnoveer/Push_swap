/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 12:42:55 by pvan-ren          #+#    #+#             */
/*   Updated: 2018/06/05 11:00:40 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	chr;

	i = ft_strlen(s);
	chr = (char)c;
	while (*(s + i) != chr)
		if (i-- == 0)
			return (NULL);
	return ((char*)(s + i));
}
