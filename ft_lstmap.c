/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 14:30:58 by sneyt             #+#    #+#             */
/*   Updated: 2022/04/08 11:18:27 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ans;
	t_list	*tmp;

	if ((!lst || !f))
		return (0);
	ans = 0;
	while (lst)
	{
		tmp = ft_lstnew((*f)(lst->content));
		if (!tmp)
		{
			ft_lstclear(&ans, del);
			return (0);
		}
		ft_lstadd_back(&ans, tmp);
		lst = lst->next;
	}
	return (ans);
}
	/*
	if (!lst || !f || !del)
		return (0);
	tmp = ft_lstnew(f(lst->content));
	if (!tmp)
		return (0);
	ans = tmp;
	lst = lst->next;
	while (lst)
	{
		tmp->next = ft_lstnew(f(lst->content));
		if (!tmp->next)
		{
			ft_lstclear(&ans, del);
			return (0);
		}
		tmp = tmp->next;
		lst = lst->next;
	}
	tmp->next = 0;
	return (ans);*/
