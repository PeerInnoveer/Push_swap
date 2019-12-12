/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 14:26:56 by pvan-ren          #+#    #+#             */
/*   Updated: 2018/06/05 11:09:04 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *str, unsigned int start, size_t len)
{
	char			*ret;
	unsigned int	i;

	if (!str || !(ret = ft_strnew(len)))
		return (NULL);
	i = -1;
	while (++i < len)
		ret[i] = str[start + i];
	return (ret);
}
