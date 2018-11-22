/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomai-va <yomai-va@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 21:11:00 by yomai-va          #+#    #+#             */
/*   Updated: 2018/11/22 19:43:50 by yomai-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char *mem;

	mem = (char *)malloc(sizeof(char) * size);
	if (mem == NULL)
		return (NULL);
	ft_memset(mem, '\0', size);
	return (mem);
}
