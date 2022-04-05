/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 11:13:21 by sneyt             #+#    #+#             */
/*   Updated: 2022/04/05 11:56:43 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memmove(void *dst, void *src, size_t len)
{
	unsigned char	*unsdst;
	unsigned char	*unssrc;
	unsigned char	buf[len];

	if (!dst || !src)
		return (0);
	unsdst = (unsigned char *)dst;
	unssrc = (unsigned char *)src;
	ft_memcpy(buf, unssrc, len);
	ft_memcpy(unsdst, buf, len);
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
