/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 16:09:53 by sneyt             #+#    #+#             */
/*   Updated: 2022/04/05 16:20:54 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ans;
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen((char *)s);
	ans = (char *)malloc(sizeof(char) * (len + 1));
	if (!ans)
		return (0);
	while (i < len)
	{
		ans[i] = f(i, s[i]);
		i++;
	}
	ans[i] = '\0';
	return (ans);
}
/*
char	ft_addingone(unsigned int a, char b)
{
	return(b + a);
}

int	main(void)
{
	char s[] = "gggg";
	printf("%s\n", ft_strmapi(s, &ft_addingone));
}*/
