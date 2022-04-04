/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:44:43 by sneyt             #+#    #+#             */
/*   Updated: 2022/04/04 15:10:44 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strchr(char *p, int ch)
{
	size_t	len;

	len = 0;
	while (p && *(p + len))
	{
		if (*(p + len) == (char)(ch))
			return ((char *)(p + len));
		len++;
	}
	if (p && (char)ch == 0)
		return ((char *)(p + len));
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	char s[] = "this is a &testsr&ing";
	printf("%s\n", ft_strchr(s, '\0'));
}*/
