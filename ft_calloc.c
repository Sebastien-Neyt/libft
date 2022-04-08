/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 12:19:51 by sneyt             #+#    #+#             */
/*   Updated: 2022/04/08 10:47:10 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*ans;
	size_t	n_bytes;

	n_bytes = n * size;
	if (n_bytes / size != n)
		return (0);
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
	//test = ft_calloc(3, 1);
	if (ft_calloc(SIZE_MAX, SIZE_MAX))
		printf("succes\n");
	printf("%08x\n", test[0]);
	printf("%08x\n", test[1]);
	printf("%08x\n", test[2]);
	printf("%08x\n", test[3]);
}*/
