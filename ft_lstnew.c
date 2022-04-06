/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 13:56:53 by sneyt             #+#    #+#             */
/*   Updated: 2022/04/06 14:54:47 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void	*content)
{
	t_list	*ans;

	ans = malloc(sizeof(t_list));
	if (!ans)
		return (0);
	ans->content = content;
	ans->next = 0;
	return (ans);
}
