/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 15:56:57 by sneyt             #+#    #+#             */
/*   Updated: 2022/04/06 12:22:16 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *haystack, char const *needle, size_t len)
{
	size_t	i;
	size_t	x;

	if (needle[0] == 0)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0')
	{
		x = 0;
		while (haystack[i + x] == needle[x] && i + x < len)
		{
			x++;
			if (needle[x] == '\0')
				return ((char *)(haystack + i));
		}
		i++;
	}
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>
int	main(void)
{
	char part1[] = "this is the haystack";
	char part2[] = "the";
	char *pt;

	pt = ft_strnstr(part1, part2, 15);
	printf("%s\n", pt);
}*/
