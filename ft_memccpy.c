/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomai-va <yomai-va@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 18:26:26 by yomai-va          #+#    #+#             */
/*   Updated: 2018/11/15 17:28:03 by yomai-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *restrict dst, const void *restrict src,
int c, size_t n)
{
	size_t	i;
	char	*d1;
	char	*s1;

	d1 = (char *)dst;
	s1 = (char *)src;
	i = 0;
	while (i <= n)
	{
		d1[i] = s1[i];
		if (s1[i] == (unsigned char)c)
		{
			return (d1 + i + 1);
		}
		i++;
	}
	return (NULL);
}
