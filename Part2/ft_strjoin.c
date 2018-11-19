/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomai-va <yomai-va@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 16:24:02 by yomai-va          #+#    #+#             */
/*   Updated: 2018/11/19 16:36:34 by yomai-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)malloc(sizeof(*str) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!str)
		return (NULL);
	if (!s1 || !s2)
		return (NULL);
	while (str[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (str[i])
	{
		str[i] = s2[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
