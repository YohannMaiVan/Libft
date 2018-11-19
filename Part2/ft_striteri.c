/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomai-va <yomai-va@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 18:04:35 by yomai-va          #+#    #+#             */
/*   Updated: 2018/11/16 18:16:48 by yomai-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int,
char *))
{
	int i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}