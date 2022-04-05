/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 15:56:57 by sneyt             #+#    #+#             */
/*   Updated: 2022/04/05 09:59:34 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strnstr(char *haystack, char *needle, size_t len)
{
	size_t	i;
	size_t	x;

	if (needle[0] == 0)
		return (haystack);
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
