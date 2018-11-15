/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomai-va <yomai-va@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 21:14:06 by yomai-va          #+#    #+#             */
/*   Updated: 2018/11/15 16:42:09 by yomai-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*d1;
	size_t	i;

	i = 0;
	d1 = (char *)s;
	while (i < n)
	{
		if (d1[i] == (unsigned char)c)
		{
			printf("The value of d1 is : %c\n", *(d1 + i));
			return (d1 + i);
		}
		i++;
	}
	return (NULL);
}
