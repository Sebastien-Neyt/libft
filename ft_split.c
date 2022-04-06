/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 09:37:56 by sneyt             #+#    #+#             */
/*   Updated: 2022/04/06 10:13:29 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
static int	ft_checkifsep(char const *s, char c)
{
	unsigned int	status;
	unsigned int	i;

	i = 0;
	status = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			status = 1;
			break ;
		}
		i++;
	}
	return (status);
}
*/
static size_t	ft_wordcounter(char *s, char c)
{
	size_t			count;
	unsigned int	x;

	x = 0;
	count = 0;
	while (s[x])
	{
		while (s[x] && s[x] == c)
			x++;
		if (s[x])
			count++;
		while (s[x] && s[x] != c)
			x++;
	}
	return (count);
}

static void	ft_wordmalloc(char *s, char c, size_t amount, char **ans)
{
	size_t	i;
	size_t	x;
	size_t	len;

	i = 0;
	x = 0;
	while (s[i] && x < amount)
	{
		len = 0;
		if (s[i] != c)
		{
			while (s[i + len] != c && s[i + len])
				len++;
			ans[x] = malloc(sizeof(char) * (len + 1));
			if (!ans[x])
				return ;
			ft_strlcpy(ans[x], (s + i), (len + 1));
			x++;
		}
		i += (1 + len);
	}
}

char	**ft_split(char const *s, char c)
{
	char	**ans;
	size_t	amount;

	if (s == 0)
		return (0);
	amount = ft_wordcounter((char *)s, c);
	ans = (char **)malloc(sizeof(char *) * (amount + 1));
	if (!ans)
		return (0);
	ans[amount] = 0;
	ft_wordmalloc((char *)s, c, amount, ans);
	return (ans);
}
/*
int	main(int argc, char *argv[])
{
	int	i;
	char **test;
	(void) argc;
	test = ft_split(argv[1], argv[2][0]);
	i = 0;
	while (test[i])
	{
		printf("%s\n", test[i]);
		i++;
	}
}*/
