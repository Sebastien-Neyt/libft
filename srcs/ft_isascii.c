/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 12:10:29 by sneyt             #+#    #+#             */
/*   Updated: 2022/04/04 12:12:59 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	return ((c >= 0) && (c <= 127));
}
/*
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	char a = '\n';
	printf("%d\n", isascii(a));
	printf("%d\n", ft_isascii(a));
}*/
