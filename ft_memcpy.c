/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 10:29:41 by sneyt             #+#    #+#             */
/*   Updated: 2022/04/08 11:39:52 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, void const *src, size_t n)
{
	size_t	i;

	if (dest == src)
		return (dest);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

//if (!dest || !src)
	//	return (0);

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	short int s1[] = {1, 2 };
	int s2[] = {3, 4 };
	printf("%d / %d\n", s1[0], s1[1]);
	printf("%d / %d\n", s2[0], s2[1]);
	memcpy(s1, s2, 2* sizeof(short int));
	printf("%d / %d\n", s1[0], s1[1]);
	printf("%d / %d\n", s2[0], s2[1]);

}*/
