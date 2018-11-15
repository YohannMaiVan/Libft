/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomai-va <yomai-va@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 20:48:04 by yomai-va          #+#    #+#             */
/*   Updated: 2018/11/15 17:32:45 by yomai-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *dst;

	dst = b;
	if (b == NULL || len <= 0)
		return (b);
	while (len > 0)
	{
		*dst = (unsigned char)c;
		dst++;
		len--;
	}
	return (dst);
}
