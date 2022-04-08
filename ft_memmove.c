/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 11:13:21 by sneyt             #+#    #+#             */
/*   Updated: 2022/04/08 11:32:04 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void *src, size_t len)
{
	unsigned char	*unsdst;
	unsigned char	*unssrc;

	if (dst == src)
		return (dst);
	if (src > dst)
	{
		dst = ft_memcpy(dst, src, len);
		return (dst);
	}
	unsdst = (unsigned char *)dst;
	unssrc = (unsigned char *)src;
	while (len-- > 0)
	{
		unsdst[len] = unssrc[len];
	}
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char p[] = "test string";
	char x[] = "also test string";
	ft_memmove(p, x, 4);
	printf("%s\n", p);
}*/
