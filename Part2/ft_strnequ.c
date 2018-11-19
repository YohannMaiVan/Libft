/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomai-va <yomai-va@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 15:53:53 by yomai-va          #+#    #+#             */
/*   Updated: 2018/11/19 16:03:42 by yomai-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strnequ(char const *s1, char const *s2,
size_t n)
{
	size_t i;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	while (s1[i] && s2[i] && i != n)
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
		if ((s1[i] == '\0' && s2[i] != '\0') ||
		(s1[i] != '\0' && s2[i] == '\0'))
			return (0);
	}
	return (1);
}
