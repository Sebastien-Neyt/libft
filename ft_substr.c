/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 13:35:28 by sneyt             #+#    #+#             */
/*   Updated: 2022/04/06 10:09:09 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ans;
	unsigned int	i;

	ans = (char *)malloc(sizeof(char) * (len + 1));
	if (!ans)
		return (0);
	i = 0;
	while (i < len && s[start + i])
	{
		ans[i] = s[start + i];
		i++;
	}
	ans[i] = '\0';
	return (ans);
}
/*
int	main(void)
{
	char str[] = "test string";
	char *test;
	test = ft_substr(str, 5, 3);
	printf("%s\n", test);
}*/
