/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 15:11:04 by sneyt             #+#    #+#             */
/*   Updated: 2022/04/05 16:08:03 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_countdigits(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count++;
		n *= -1;
	}
	if (n == 0)
		count = 1;
	while (n > 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ansbuilder(unsigned int nbr, char *ans, int len)
{
	ans[len] = '\0';
	while (--len >= 0)
	{
		ans[len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (ans);
}

char	*ft_itoa(int n)
{
	int				len;
	int				neg;
	unsigned int	nbr;
	char			*ans;

	neg = 0;
	len = ft_countdigits(n);
	nbr = n;
	if (n == INT_MIN)
		return (ft_strdup("-2147483468"));
	ans = (char *)malloc(sizeof(char) * (len + 1));
	if (n < 0)
	{
		nbr = -n;
		neg = 1;
	}
	if (!ans)
		return (0);
	ansbuilder(nbr, ans, len);
	if (neg)
		ans[0] = '-';
	return (ans);
}
/*
int	main(void)
{
	int	i = -147483647;
	printf("%s\n", ft_itoa(i));
}*/
