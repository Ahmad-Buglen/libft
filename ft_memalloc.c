/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphyliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 16:47:11 by dphyliss          #+#    #+#             */
/*   Updated: 2019/05/03 21:51:23 by dphyliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	size_t	i;
	void	*point;

	if (size == 0)
		return (NULL);
	point = (void *)malloc(size);
	if (point == NULL)
		return (NULL);
	else
	{
		i = 0;
		while (i < size)
		{
			((char *)point)[i] = '\0';
			++i;
		}
		return ((void *)point);
	}
}
