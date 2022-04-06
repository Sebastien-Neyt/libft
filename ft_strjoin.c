/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 13:48:43 by sneyt             #+#    #+#             */
/*   Updated: 2022/04/06 10:08:47 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ans;
	size_t	l1;
	size_t	l2;

	if (!s1)
		return ((char *)s2);
	else if (!s2)
		return ((char *)s1);
	l1 = ft_strlen((char *)s1);
	l2 = ft_strlen((char *)s2);
	ans = (char *)malloc(sizeof(char) * (l1 + l2 + 1));
	if (!ans)
		return (0);
	ft_memcpy(ans, (char *)s1, l1);
	ft_memcpy(ans + l1, (char *)s2, l2);
	ans[l1 + l2] = '\0';
	return (ans);
}
/*
int	main(void)
{
	char prt1[] = "this is a ";
	char prt2[] = "test";
	char *ans;

	ans = ft_strjoin(prt1, prt2);
	printf("%s\n", ans);
}*/
