/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomai-va <yomai-va@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 19:35:34 by yomai-va          #+#    #+#             */
/*   Updated: 2018/11/15 19:52:31 by yomai-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strcmp(char *s1, char *s2)
{
	unsigned int i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if ((s1[i] == '\0' && s2[i]) || (s2[i] == '\0' && s1[i]))
		return (s1[i] - s2[i]);
	return (0);
}

int		ft_strncmpbool(const char *s1, const char *s2, int n)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && i < n)
	{
		i++;
		if (i == n)
			return (1);
	}
	return (0);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strnstr(char *str, char *to_find, int len)
{
	int i;

	i = 0;
	while (str[i] != to_find[0] && str[i] != '\0')
		i++;
	if (ft_strcmp(to_find, "") == 0)
		return (str);
	if (ft_strlen(str) < ft_strlen(to_find))
		return (0);
	while (str[i] && i < len)
	{
		if (ft_strncmpbool(&str[i], to_find, ft_strlen(to_find)) == 1)
			return (&str[i]);
		else
			i++;
	}
	return (NULL);
}
