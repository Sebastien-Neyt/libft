/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:37:16 by sneyt             #+#    #+#             */
/*   Updated: 2022/04/04 14:41:07 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
#include <stdio.h>
int	main(void)
{
	char s[] = "this Is A TEststring";
	int	i;

	i = 0;
	while (s[i])
	{	
		printf("%c", ft_toupper(s[i]));
		i++;
	}
}*/
