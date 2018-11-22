/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomai-va <yomai-va@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 17:18:30 by yomai-va          #+#    #+#             */
/*   Updated: 2018/11/21 18:26:38 by yomai-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*tmp;
	tmp = malloc(sizeof(t_list));
	if (tmp)
	{
		tmp->content = content;
		tmp->content_size = content_size;
		tmp->next = content;
	}
	return (tmp);
	free(tmp);
}
