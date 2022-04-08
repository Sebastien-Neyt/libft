/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 12:33:48 by sneyt             #+#    #+#             */
/*   Updated: 2022/04/08 11:17:08 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, char const *src, size_t maxlen)
{
	size_t	srclen;
	size_t	count;

	srclen = ft_strlen(src);
	if (maxlen == 0)
		return (srclen);
	count = 0;
	while (count < maxlen - 1 && *(src + count))
	{
		*(dst + count) = *(src + count);
		count++;
	}
	*(dst + count) = '\0';
	return (srclen);
}
/*
#include <stdio.h>
int	main(void)
{
	char src[] = "thisisthesource";
	char dest[10];
	size_t x = ft_strlcpy(dest, src, 5);
	printf("%s\n", dest);
	printf("%lu\n", x);
}*/
