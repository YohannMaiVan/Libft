/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomai-va <yomai-va@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 13:53:52 by yomai-va          #+#    #+#             */
/*   Updated: 2018/11/27 19:25:32 by yomai-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *palst;

	while ((*alst))
	{
		palst = (*alst);
		(*alst) = (*alst)->next;
		del(palst->content, palst->content_size);
		free(palst);
		palst = NULL;
	}
}
