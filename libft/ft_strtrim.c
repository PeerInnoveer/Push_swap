/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 10:43:13 by pvan-ren          #+#    #+#             */
/*   Updated: 2018/06/05 11:12:25 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	iswhitespace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

char		*ft_strtrim(char const *s)
{
	char	*start;
	char	*ret;
	size_t	len;

	if (!s)
		return (NULL);
	while (iswhitespace(*s))
		s++;
	if (!*s)
		return (ft_strdup(""));
	start = (char*)s;
	len = 1;
	while (*++s)
		len++;
	while (iswhitespace(*--s))
		len--;
	if (!(ret = ft_strnew(len)))
		return (NULL);
	return (ft_strncpy(ret, start, len));
}
