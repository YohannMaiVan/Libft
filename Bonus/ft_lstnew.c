/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomai-vai <yomai-va@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 17:18:30 by yomai-va          #+#    #+#             */
/*   Updated: 2018/11/26 17:49:55 by yomai-vai        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*tmp;
	tmp = (t_list*)malloc(sizeof(t_list));
	if (tmp = NULL)
		return (NULL);
	if (content = NULL)
	{
		tmp->content = NULL;
		tmp->content_size = 0;
	}
	if (tmp)
	{
		tmp->content = content;
		tmp->content_size = content_size;
		tmp->next = content;
	}
	return (tmp);
	free(tmp);
}
