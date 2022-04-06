/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 15:12:27 by sneyt             #+#    #+#             */
/*   Updated: 2022/04/06 10:40:09 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t a)
{
	size_t	c;

	c = 0;
	if (!s1 || !s2)
		return (0);
	while (c < a)
	{
		if (s1[c] != s2[c])
			return ((unsigned char)(s1[c]) - (unsigned char)(s2[c]));
		c++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char s1[] = "we \200qre looking for a match";
	char s2[] = "we \0are looking for a match";
	printf("%d\n", ft_strncmp(s1, s2, 100));
	printf("%d\n", strncmp(s1, s2, 100));
}*/