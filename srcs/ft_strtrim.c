/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 14:07:26 by sneyt             #+#    #+#             */
/*   Updated: 2022/04/05 14:34:26 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_char_present(char *str, char c)
{
	int	status;

	status = 0;
	while (*str)
	{
		if (*str == c)
			status = 1;
		str++;
	}
	return (status);
}

int	ft_countingsetchars(char *str, char *set)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (*set)
		{
			if (str[i] == *set)
			{
				count++;
				break ;
			}
			set++;
		}
		i++;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ans;
	int		amount;
	int		len;
	int		i;
	int		j;

	j = 0;
	i = 0;
	len = ft_strlen((char *)s1);
	amount = ft_countingsetchars((char *)s1, (char *)set);
	ans = (char *)malloc(sizeof(char) * (len - amount));
	if (!ans)
		return (0);
	while (j < len - amount)
	{
		if (!ft_char_present((char *)set, s1[j]))
		{
			ans[i] = s1[j];
			i++;
		}
		j++;
	}
	ans[i] = '\0';
	return (ans);
}
/*
int	main(void)
{
	char test[] = "lets is see is if see this is works";
	char sep[] = "is ";
	char *ans;

	ans = ft_strtrim(test, sep);
	printf("%s\n", ans);
}*/
