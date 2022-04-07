/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 10:05:41 by sneyt             #+#    #+#             */
/*   Updated: 2022/04/07 12:22:48 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t a)
{
	unsigned char	*temp1;
	unsigned char	*temp2;
	unsigned int	i;

	temp1 = (unsigned char *)ptr1;
	temp2 = (unsigned char *)ptr2;
	i = 0;
	while (i < a)
	{
		if (temp1[i] != temp2[i])
			return (temp1[i] - temp2[i]);
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int main(void)
{
	char a[] = "te\200xt";
	unsigned char b[] = "test";
	printf("%d\n", memcmp(a, b, 4 * sizeof(unsigned char)));
	printf("%d\n", ft_memcmp(a, b, 4));
}*/
