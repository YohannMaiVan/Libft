/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomai-va <yomai-va@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 20:48:04 by yomai-va          #+#    #+#             */
/*   Updated: 2018/11/13 13:48:09 by yomai-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *dst = b;

	if (b == NULL || len <= 0)
		return (b);

	while (len > 0)
	{
		*dst = (unsigned char)c;
		dst++;
		len--;
	}
	return (b);
}

int main () {
   char str[50];

   strcpy(str,"This is string.h library function");
   puts(str);
	printf("Fonction memset \n");
   memset(str,'$',7);
   puts(str);
   printf("My ft_memset \n");

   ft_memset(str,'$',7);
   puts(str);
   
   return(0);
}