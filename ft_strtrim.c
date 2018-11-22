/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomai-va <yomai-va@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 16:37:02 by yomai-va          #+#    #+#             */
/*   Updated: 2018/11/21 21:17:46 by yomai-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_blank(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

char			*ft_strtrim(char const *s)
{
	int		i;
	int		start;
	int		end;
	char	*str;

	i = 0;
	start = i;
	while (s[i] && ft_blank(s[i]) == 1)
		i++;
	start = i;
	i = 0;
	while (s[i])
		i++;
	i--;
	end = i;
	while (end > start && ft_blank(s[i--]) == 1)
		end--;
	end = i;
	if (!(str = (char *)malloc(sizeof(char) * ((end - start) + 1))))
		return (NULL);
	i = 0;
	while (start <= end + 1)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
