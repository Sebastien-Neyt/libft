/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 12:01:28 by sneyt             #+#    #+#             */
/*   Updated: 2022/04/07 11:51:02 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char const *str)
{
	int		sign;
	long	result;

	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	sign = 1;
	if (*str == 43 || *str == 45)
	{
		if (*str == 45)
			sign *= -1;
		str++;
	}
	result = 0;
	while (ft_isdigit(*str))
	{
		result = (result * 10) + (*str - '0');
		if ((result * sign) > 2147483647)
			return (-1);
		if ((result * sign) < -2147483648)
			return (0);
		str++;
	}
	return ((int)result * sign);
}
/*
#include <stdio.h>
#include <string.h>
int	main(int argc, char *argv[])
{
	printf("%d\n" , ft_atoi(argv[1]));
}*/
