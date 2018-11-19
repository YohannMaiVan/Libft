/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomai-va <yomai-va@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 16:37:02 by yomai-va          #+#    #+#             */
/*   Updated: 2018/11/19 19:54:07 by yomai-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

int	ft_blank(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
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

char	*ft_strtrim(char const *s)
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

int	main(void)
{
	const char s[100];
	char *str;
	//strcpy((char *)s, " ");
	strcpy((char *)s, "    HELLO     TOTO    ");
	printf("|%s|\n", s);
	str = ft_strtrim(s);
	printf("|%s|\n", str);
	
	return (0);
}