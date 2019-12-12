/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 11:09:40 by pvan-ren          #+#    #+#             */
/*   Updated: 2018/08/30 12:52:48 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_splits(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s == c)
		s++;
	while (*s)
	{
		while (*s != c)
			s++;
		while (*s == c)
			s++;
		i++;
	}
	return (i);
}

static size_t	split_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s == c)
		s++;
	while (*s && *s++ != c)
		len++;
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	len;
	char	**splits;

	if (!s)
		return (NULL);
	i = 0;
	if (!(splits = (char**)ft_memalloc(sizeof(splits) *
		(count_splits(s, c) + 1))))
		return (NULL);
	while (*s == c)
		s++;
	while (*s)
	{
		len = split_len(s, c);
		if (!(splits[i] = ft_strnew(len)))
			return (NULL);
		ft_strncpy(splits[i++], s, len);
		while (*s && *s != c)
			s++;
		while (*s == c)
			s++;
	}
	return (splits);
}
