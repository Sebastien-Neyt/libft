/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 10:59:20 by sneyt             #+#    #+#             */
/*   Updated: 2022/04/05 11:09:18 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memchr(void *s, int c, size_t n)
{
	unsigned char	*temp;
	unsigned char	byte;
	size_t			i;

	byte = (unsigned char)c;
	temp = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (byte == temp[i])
			return (&temp[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	int test[] = {1, 2, 3, 4};
	if (ft_memchr(test, 10, 4 * sizeof(int)))
		printf("we found a match for the byte");
	else
		printf("There was no match");
}*/
