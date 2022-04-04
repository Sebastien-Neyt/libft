/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 13:48:12 by sneyt             #+#    #+#             */
/*   Updated: 2022/04/04 14:17:27 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t	destlen;
	size_t	count;

	while (*(dst + count) && count < dstsize)
		count++;
	destlen = count;
	while (*(src + count - destlen) && count + 1 < dstsize)
	{
		*(dst + count) = *(src + count - destlen);
		count++;
	}
	if (destlen < dstsize)
		*(dst + count) = '\0';
	return (destlen + ft_strlen(src));
}
/*
#include <stdio.h>
int	main(void)
{
	char dest[] = "is this";
	char src[] = "working";
	ft_strlcat(dest, src, 10);
	printf("%s\n", dest);
}*/
