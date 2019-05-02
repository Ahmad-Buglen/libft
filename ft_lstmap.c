/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphyliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 15:37:35 by dphyliss          #+#    #+#             */
/*   Updated: 2019/05/02 15:26:46 by dphyliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	list_free(t_list	*lst)
{
	t_list		*buf;
	
	while (lst)
	{
		buf = lst;
		free(lst);
		lst = buf->next;
	}
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*list;

	if (!lst || !f)
		return (NULL);
//	if (!(new = (t_list *)malloc(sizeof(t_list))))
//		return (NULL);
	new = &lst;
//	list = f(lst);
//	if (NULL == list)
//		return (NULL);
	while (lst->next)
	{
	//	lst = lst->next;
		list->next = (t_list *)malloc(sizeof(t_list));
		if (list->next && f(lst))
		{
			list_free(new);
			return (NULL);
		}
		else 
			list->next = f(lst);
		list = list->next;
	}
	return (new);
}
