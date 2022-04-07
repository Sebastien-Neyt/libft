/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 14:07:26 by sneyt             #+#    #+#             */
/*   Updated: 2022/04/07 10:22:16 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ispartofset(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*ans;
	char	*start;
	char	*end;

	if (!s1 || !set)
		return (0);
	start = (char *)s1;
	end = start + ft_strlen(s1);
	while (*start && ft_ispartofset(*start, set))
		start++;
	while (start < end && ft_ispartofset(*(end - 1), set))
		end--;
	ans = ft_substr(start, 0, end - start);
	return (ans);
}
/*
int	main(void)
{
	char *s1 = "   \t  \n\n \t\t  \n\n\nHello \t 
   	Please\n Trim me !\n   \n \n \t\t\n  ";
	char *s2 = "Hello \t  Please\n Trim me !";
	char *ret = ft_strtrim(s1, " \n\t");
	printf("%s\n", ret);
	if (!strcmp(ret, s2))
		printf("(TEST_SUCCESS)");
	else
		printf("(TEST_FAILED)");
}*/
