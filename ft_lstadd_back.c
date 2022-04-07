/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_listadd_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 14:11:07 by sneyt             #+#    #+#             */
/*   Updated: 2022/04/07 11:55:03 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	temp = ft_lstlast(*lst);
	if (!temp)
		*lst = new;
	else
		temp->next = new;
}
