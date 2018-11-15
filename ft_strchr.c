/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomai-va <yomai-va@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 18:20:32 by yomai-va          #+#    #+#             */
/*   Updated: 2018/11/15 19:10:01 by yomai-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*s2;

	s2 = (char*)s;
	i = 0;
	while (s2)
	{
		if (s2[i] == (char)c)
			return (s2 + i);
		i++;
	}
	return (NULL);
}
