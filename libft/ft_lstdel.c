/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 14:24:33 by pvan-ren          #+#    #+#             */
/*   Updated: 2018/06/05 11:19:34 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*new;
	t_list	*tmp;

	new = *alst;
	while (new)
	{
		tmp = new->next;
		del(new->content, new->content_size);
		new = new->next;
		new = tmp;
		free(tmp);
	}
	*alst = NULL;
}
