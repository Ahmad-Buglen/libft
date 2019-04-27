/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphyliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 14:50:39 by dphyliss          #+#    #+#             */
/*   Updated: 2019/04/25 18:56:18 by dphyliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*lst;
	void	*temp;

	lst = (t_list *)malloc(sizeof(t_list));
	if (NULL == lst)
		return (NULL);
	else
	{
		if (content)
		{
			temp = (void *)ft_strdup((char *)content);
			if (NULL == temp)
				return (NULL);
			lst->content = temp;
			free(temp);
		}
		else
			lst->content = NULL;
		lst->next = NULL;
		lst->content_size = content_size;
		return (lst);
	}
}
