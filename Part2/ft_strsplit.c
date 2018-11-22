/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomai-va <yomai-va@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 19:56:39 by yomai-va          #+#    #+#             */
/*   Updated: 2018/11/19 22:18:08 by yomai-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_nbwords(char const *str, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
			j++;
		i++;
	}
	return (j);
}

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**tab;

	i = 0;
	j = 0;
	if (!(tab = (char **)malloc(sizeof(char *) * (ft_nbwords(s, c) + 1))))
		return (NULL);
	while (i < ft_nbwords(s, c))
	{
		k = 0;
		if (!(tab[i] = (char *)malloc(sizeof(char) *
				(ft_strlen((char *)s + 1)))))
			return (NULL);
		while (s[j] && s[j] == c)
			j++;
		while (s[j] && s[j] != c)
			tab[i][k++] = s[j++];
		tab[i][k] = '\0';
		i++;
	}
	tab[i] = 0;
	return (tab);
}

int main()
{
	char s[1000000];
	char **z;

	strcpy(s, "a b c");
	z = ft_strsplit(s, ' ');

int i = 0;
	while (z[i])
		printf("|%s|\n", z[i++]);
}
