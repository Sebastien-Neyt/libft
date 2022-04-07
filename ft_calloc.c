/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 12:19:51 by sneyt             #+#    #+#             */
/*   Updated: 2022/04/07 11:52:42 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*ans;

	ans = malloc(n * size);
	if (!ans)
		return (0);
	ft_bzero(ans, size * n);
	return (ans);
}
/*
int	main(void)
{
	char	*test;
	test = ft_calloc(3, 1);
	printf("%08x\n", test[0]);
	printf("%08x\n", test[1]);
	printf("%08x\n", test[2]);
	printf("%08x\n", test[3]);
}*/
