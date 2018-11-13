/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomai-va <yomai-va@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 14:10:53 by yomai-va          #+#    #+#             */
/*   Updated: 2018/11/13 14:10:56 by yomai-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (dest[j] && j < size)
		j++;
	while (src[i] && i + j + 1 < size)
	{
		dest[i + j] = src[i];
		i++;
	}
	if (j != size)
		dest[i + j] = '\0';
	return (j + ft_strlen(src));
}
