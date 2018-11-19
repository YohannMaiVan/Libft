/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomai-va <yomai-va@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 16:01:31 by yomai-va          #+#    #+#             */
/*   Updated: 2018/11/19 16:30:05 by yomai-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start,
size_t len)
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = (char *)malloc(sizeof(*str) * len + 1);
	if (!str)
		return (NULL);
	if (!s[start] || !len)
		return (NULL);
	while (s[start] && len != 0)
	{
		str[i] = s[start];
		i++;
		start++;
		len--;
	}
	str[i] = '\0';
	return (str);
}
