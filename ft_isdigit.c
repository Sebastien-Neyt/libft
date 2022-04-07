/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 11:44:55 by sneyt             #+#    #+#             */
/*   Updated: 2022/04/07 11:53:12 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int a)
{
	if (a >= '0' && a <= '9')
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	char a = ')';
	printf("%d\n", isdigit(a));
	printf("%d\n", ft_isdigit(a));
}*/
