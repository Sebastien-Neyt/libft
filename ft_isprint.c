/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 12:13:23 by sneyt             #+#    #+#             */
/*   Updated: 2022/04/07 11:53:14 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int a)
{
	return (a >= 32 && a <= 126);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	char a = '\0';
	printf("%d\n", isprint(a));
	printf("%d\n", ft_isprint(a));
}*/
